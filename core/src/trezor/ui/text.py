from micropython import const

from trezor import ui

if False:
    from typing import List, Union, Tuple, Generator, Iterator, Iterable, Optional

TEXT_HEADER_HEIGHT = const(48)
TEXT_LINE_HEIGHT = const(26)
TEXT_LINE_HEIGHT_HALF = const(13)
TEXT_MARGIN_LEFT = const(14)
TEXT_MAX_LINES = const(5)

# needs to be different from all colors and font ids
BR = const(-256)
BR_HALF = const(-257)

_FONTS = (ui.NORMAL, ui.BOLD, ui.MONO)

if False:
    TextContent = Union[str, int]
    BreakIndex = Tuple[
        int, int, Optional[str]
    ]  # "word" index, char index, split marker


LINE_END = ""
LINE_BREAK = "-"
PAGE_END = "..."
WHITESPACE = " \n"


class LineBreakInfo:
    def __init__(self) -> None:
        self.set(0, 0, LINE_END)

    def set(self, word_index: int, char_index: int, end_marker: str) -> None:
        self.word_index = word_index
        self.char_index = char_index
        self.end_marker = end_marker


def next_helper(iterator: Iterator[None]) -> bool:
    try:
        next(iterator)
        return True
    except StopIteration:
        return False


def measure_line(
    string: str,
    string_offset: int,
    line_width: int,
    font: int,
    splitchar_width: int,
    break_words: bool,
) -> int:
    # XXX this function reuses the same buffer to return values. Do not store it.
    width = 0
    result = 0
    found_space = False

    for i in range(len(string) - string_offset):
        if string[string_offset + i] in WHITESPACE:
            # mark this space as a possible result
            found_space = True
            result = i
            if string[string_offset + i] == "\n":
                # early return for a newline
                return result

        nextchar_width = ui.display.text_width(string[string_offset + i], font)
        if width + nextchar_width >= line_width:
            break

        width += nextchar_width
        if (break_words or not found_space) and width + splitchar_width < line_width:
            # We haven't found a space yet, or we are allowed to put breaks
            # in the middle of words. AND this char fits on a line with the splitchar.
            # Mark as possible result. (if break_words is disallowed, this solves
            # the "one word longer than line" case)
            result = i + 1

    else:
        # whole string (from offset) fits
        return len(string)

    # at this point either:
    # (a) we found a space and a result is ready
    # (b) we found a possible word-split and a result is ready
    # (c) we are not allowed to break words, and did not find a space, result is word-split
    # (d) we are allowed to break words, but even the first char won't fit, result is zero

    return result


def break_lines(
    word: str,
    word_offset: int,
    font: int = ui.NORMAL,
    offset_x: int = 0,
    line_width: int = ui.WIDTH - TEXT_MARGIN_LEFT,
    break_words: bool = False,
) -> Iterator[int]:
    # sizes of common glyphs
    DASH = ui.display.text_width(LINE_BREAK, ui.BOLD)

    if not word:
        # XXX remove when this stops happening
        return

    while True:
        nchars = measure_line(
            word,
            word_offset,
            line_width - offset_x,
            font,
            DASH,
            break_words,
        )

        if nchars == 0:
            # not enough space on line for next char
            # this should only happen at start of word?
            yield word_offset
            offset_x = 0
            continue

        word_offset += nchars
        if word_offset >= len(word):
            break

        yield word_offset
        offset_x = 0
        if word[word_offset] in WHITESPACE:
            word_offset += 1


def render_text(
    words: List[TextContent],
    new_lines: bool,
    max_lines: int,
    font: int = ui.NORMAL,
    fg: int = ui.FG,
    bg: int = ui.BG,
    offset_x: int = TEXT_MARGIN_LEFT,
    offset_y: int = TEXT_HEADER_HEIGHT + TEXT_LINE_HEIGHT,
    offset_x_max: int = ui.WIDTH,
    word_offset: int = 0,
    char_offset: int = 0,
    break_words: bool = False,
) -> None:
    # initial rendering state
    INITIAL_OFFSET_X = offset_x
    SPACE = ui.display.text_width(" ", font)
    offset_y_max = TEXT_HEADER_HEIGHT + (TEXT_LINE_HEIGHT * max_lines)
    line_width = offset_x_max

    for word_index in range(word_offset, len(words)):
        # load current word
        word = words[word_index]

        if isinstance(word, int):
            if word is BR or word is BR_HALF:
                # line break or half-line break
                if offset_y > offset_y_max:
                    ui.display.text(offset_x, offset_y, "...", ui.BOLD, ui.GREY, bg)
                    return
                offset_x = INITIAL_OFFSET_X
                offset_y += TEXT_LINE_HEIGHT if word is BR else TEXT_LINE_HEIGHT_HALF
            elif word in _FONTS:
                # change of font style
                font = word
            else:
                # change of foreground color
                fg = word
            continue

        start_char = char_index = char_offset
        for char_index in break_lines(
            word,
            char_offset,
            font,
            offset_x - INITIAL_OFFSET_X,
            line_width,
            break_words,
        ):
            span_len = char_index - start_char
            ui.display.text(
                offset_x, offset_y, word, font, fg, bg, start_char, span_len
            )
            if offset_y + TEXT_LINE_HEIGHT >= offset_y_max:
                # if we are here, break_lines promises that there is more to come
                width = ui.display.text_width(word, font, start_char, span_len)
                ui.display.text(offset_x + width, offset_y, "...", ui.BOLD, ui.GREY, bg)
                return

            if word[char_index] not in WHITESPACE:
                width = ui.display.text_width(word, font, start_char, span_len)
                ui.display.text(
                    offset_x + width, offset_y, LINE_BREAK, ui.BOLD, ui.GREY, bg
                )

            offset_x = INITIAL_OFFSET_X
            offset_y += TEXT_LINE_HEIGHT
            start_char = char_index
            if word[char_index] in WHITESPACE:
                start_char += 1

        # render last chunk
        ui.display.text(offset_x, offset_y, word, font, fg, bg, start_char)

        if new_lines:
            offset_x = INITIAL_OFFSET_X
            offset_y += TEXT_LINE_HEIGHT
        else:
            width = ui.display.text_width(word, font, start_char)
            offset_x += width + SPACE


class Text(ui.Component):
    def __init__(
        self,
        header_text: str,
        header_icon: str = ui.ICON_DEFAULT,
        icon_color: int = ui.ORANGE_ICON,
        max_lines: int = TEXT_MAX_LINES,
        new_lines: bool = True,
        break_words: bool = False,
        content_offset: int = 0,
        char_offset: int = 0,
        line_width: int = ui.WIDTH - TEXT_MARGIN_LEFT,
    ):
        self.header_text = header_text
        self.header_icon = header_icon
        self.icon_color = icon_color
        self.max_lines = max_lines
        self.new_lines = new_lines
        self.break_words = break_words
        self.content = []  # type: List[TextContent]
        self.content_offset = content_offset
        self.char_offset = char_offset
        self.line_width = line_width
        self.repaint = True

    def normal(self, *content: TextContent) -> None:
        self.content.append(ui.NORMAL)
        self.content.extend(content)
        self.breaks = None

    def bold(self, *content: TextContent) -> None:
        self.content.append(ui.BOLD)
        self.content.extend(content)
        self.breaks = None

    def mono(self, *content: TextContent) -> None:
        self.content.append(ui.MONO)
        self.content.extend(content)
        self.breaks = None

    def br(self) -> None:
        self.content.append(BR)
        self.breaks = None

    def br_half(self) -> None:
        self.content.append(BR_HALF)
        self.breaks = None

    def on_render(self) -> None:
        if self.repaint:
            ui.header(
                self.header_text,
                self.header_icon,
                ui.TITLE_GREY,
                ui.BG,
                self.icon_color,
            )
            render_text(
                self.content,
                self.new_lines,
                self.max_lines,
                word_offset=self.content_offset,
                char_offset=self.char_offset,
                break_words=self.break_words,
                offset_x_max=self.line_width + TEXT_MARGIN_LEFT,
            )
            self.repaint = False

    if __debug__:

        def read_content(self) -> List[str]:
            lines = [w for w in self.content if isinstance(w, str)]
            return [self.header_text] + lines[: self.max_lines]


LABEL_LEFT = const(0)
LABEL_CENTER = const(1)
LABEL_RIGHT = const(2)


class Label(ui.Component):
    def __init__(
        self,
        area: ui.Area,
        content: str,
        align: int = LABEL_LEFT,
        style: int = ui.NORMAL,
    ) -> None:
        self.area = area
        self.content = content
        self.align = align
        self.style = style
        self.repaint = True

    def on_render(self) -> None:
        if self.repaint:
            align = self.align
            ax, ay, aw, ah = self.area
            ui.display.bar(ax, ay, aw, ah, ui.BG)
            tx = ax + aw // 2
            ty = ay + ah // 2 + 8
            if align is LABEL_LEFT:
                ui.display.text(tx, ty, self.content, self.style, ui.FG, ui.BG)
            elif align is LABEL_CENTER:
                ui.display.text_center(tx, ty, self.content, self.style, ui.FG, ui.BG)
            elif align is LABEL_RIGHT:
                ui.display.text_right(tx, ty, self.content, self.style, ui.FG, ui.BG)
            self.repaint = False

    if __debug__:

        def read_content(self) -> List[str]:
            return [self.content]


def text_center_trim_left(
    x: int, y: int, text: str, font: int = ui.NORMAL, width: int = ui.WIDTH - 16
) -> None:
    if ui.display.text_width(text, font) <= width:
        ui.display.text_center(x, y, text, font, ui.FG, ui.BG)
        return

    ELLIPSIS_WIDTH = ui.display.text_width("...", ui.BOLD)
    if width < ELLIPSIS_WIDTH:
        return

    text_length = 0
    for i in range(1, len(text)):
        if ui.display.text_width(text[-i:], font) + ELLIPSIS_WIDTH > width:
            text_length = i - 1
            break

    text_width = ui.display.text_width(text[-text_length:], font)
    x -= (text_width + ELLIPSIS_WIDTH) // 2
    ui.display.text(x, y, "...", ui.BOLD, ui.GREY, ui.BG)
    x += ELLIPSIS_WIDTH
    ui.display.text(x, y, text[-text_length:], font, ui.FG, ui.BG)


def text_center_trim_right(
    x: int, y: int, text: str, font: int = ui.NORMAL, width: int = ui.WIDTH - 16
) -> None:
    if ui.display.text_width(text, font) <= width:
        ui.display.text_center(x, y, text, font, ui.FG, ui.BG)
        return

    ELLIPSIS_WIDTH = ui.display.text_width("...", ui.BOLD)
    if width < ELLIPSIS_WIDTH:
        return

    text_length = 0
    for i in range(1, len(text)):
        if ui.display.text_width(text[:i], font) + ELLIPSIS_WIDTH > width:
            text_length = i - 1
            break

    text_width = ui.display.text_width(text[:text_length], font)
    x -= (text_width + ELLIPSIS_WIDTH) // 2
    ui.display.text(x, y, text[:text_length], font, ui.FG, ui.BG)
    x += text_width
    ui.display.text(x, y, "...", ui.BOLD, ui.GREY, ui.BG)
