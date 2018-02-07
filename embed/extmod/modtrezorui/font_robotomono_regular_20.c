#include "font_robotomono_regular_20.h"

// first two bytes are width and height of the glyph
// third, fourth and fifth bytes are advance, bearingX and bearingY of the horizontal metrics of the glyph
// rest is packed 4-bit glyph data

/*   */ static const uint8_t Font_RobotoMono_Regular_20_glyph_32[] = { 0, 0, 96, 0, 0 };
/* ! */ static const uint8_t Font_RobotoMono_Regular_20_glyph_33[] = { 3, 16, 96, 38, 114, 3, 33, 251, 31, 177, 251, 31, 177, 251, 31, 177, 251, 31, 177, 251, 6, 64, 0, 0, 1, 252, 47, 208, 0 };
/* " */ static const uint8_t Font_RobotoMono_Regular_20_glyph_34[] = { 6, 5, 96, 28, 120, 143, 0, 246, 142, 0, 246, 141, 0, 245, 140, 0, 244, 88, 0, 162 };
/* # */ static const uint8_t Font_RobotoMono_Regular_20_glyph_35[] = { 12, 15, 96, 5, 114, 0, 0, 3, 16, 3, 0, 0, 0, 63, 32, 79, 32, 0, 0, 111, 0, 127, 0, 0, 0, 156, 0, 172, 0, 1, 34, 218, 34, 218, 33, 10, 255, 255, 255, 255, 248, 2, 54, 245, 54, 245, 49, 0, 6, 240, 6, 240, 0, 0, 9, 192, 9, 192, 0, 37, 93, 197, 93, 197, 64, 111, 255, 255, 255, 255, 192, 0, 47, 48, 63, 48, 0, 0, 95, 0, 111, 0, 0, 0, 141, 0, 156, 0, 0, 0, 186, 0, 201, 0, 0 };
/* $ */ static const uint8_t Font_RobotoMono_Regular_20_glyph_36[] = { 10, 20, 96, 13, 133, 0, 0, 56, 0, 0, 0, 0, 111, 16, 0, 0, 1, 143, 64, 0, 0, 127, 255, 253, 32, 5, 253, 67, 143, 208, 11, 242, 0, 10, 244, 13, 240, 0, 5, 247, 11, 244, 0, 0, 33, 4, 255, 96, 0, 0, 0, 95, 255, 146, 0, 0, 1, 125, 255, 96, 0, 0, 0, 94, 243, 19, 16, 0, 5, 249, 95, 112, 0, 3, 250, 47, 208, 0, 8, 247, 10, 253, 118, 175, 225, 0, 143, 255, 251, 32, 0, 0, 158, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0 };
/* % */ static const uint8_t Font_RobotoMono_Regular_20_glyph_37[] = { 12, 16, 96, 4, 116, 0, 85, 16, 0, 0, 0, 13, 238, 225, 0, 0, 0, 110, 0, 216, 0, 80, 0, 140, 0, 186, 3, 242, 0, 141, 0, 201, 12, 144, 0, 63, 135, 244, 95, 16, 0, 4, 187, 80, 216, 0, 0, 0, 0, 6, 224, 0, 0, 0, 0, 14, 96, 0, 0, 0, 0, 141, 9, 254, 112, 0, 1, 245, 111, 69, 244, 0, 9, 192, 170, 0, 216, 0, 14, 48, 170, 0, 216, 0, 0, 0, 126, 18, 245, 0, 0, 0, 12, 255, 160, 0, 0, 0, 0, 17, 0 };
/* & */ static const uint8_t Font_RobotoMono_Regular_20_glyph_38[] = { 11, 16, 96, 9, 116, 0, 3, 84, 0, 0, 0, 10, 255, 253, 16, 0, 6, 251, 37, 249, 0, 0, 175, 32, 13, 192, 0, 10, 243, 1, 250, 0, 0, 95, 146, 222, 32, 0, 0, 223, 238, 32, 0, 0, 9, 255, 32, 0, 0, 10, 252, 250, 0, 57, 38, 250, 10, 247, 7, 243, 223, 16, 13, 243, 191, 14, 224, 0, 47, 239, 144, 207, 32, 0, 127, 241, 4, 254, 101, 143, 255, 128, 4, 223, 255, 162, 223, 64, 0, 34, 0, 0, 0 };
/* ' */ static const uint8_t Font_RobotoMono_Regular_20_glyph_39[] = { 3, 5, 96, 39, 120, 47, 98, 245, 47, 66, 243, 26, 32 };
/* ( */ static const uint8_t Font_RobotoMono_Regular_20_glyph_40[] = { 6, 22, 96, 28, 129, 0, 0, 0, 0, 0, 118, 0, 7, 244, 0, 79, 96, 0, 220, 0, 5, 244, 0, 11, 224, 0, 15, 176, 0, 79, 128, 0, 95, 96, 0, 127, 80, 0, 127, 64, 0, 111, 80, 0, 95, 96, 0, 47, 144, 0, 14, 192, 0, 9, 241, 0, 2, 247, 0, 0, 174, 16, 0, 30, 160, 0, 2, 231, 0, 0, 19 };
/* ) */ static const uint8_t Font_RobotoMono_Regular_20_glyph_41[] = { 6, 22, 96, 25, 129, 0, 0, 0, 148, 0, 0, 111, 64, 0, 9, 225, 0, 1, 250, 0, 0, 159, 32, 0, 63, 128, 0, 14, 192, 0, 12, 240, 0, 9, 242, 0, 9, 243, 0, 8, 244, 0, 9, 243, 0, 10, 241, 0, 13, 224, 0, 15, 160, 0, 95, 80, 0, 190, 0, 3, 246, 0, 13, 176, 0, 188, 0, 0, 64, 0, 0 };
/* * */ static const uint8_t Font_RobotoMono_Regular_20_glyph_42[] = { 10, 10, 96, 13, 96, 0, 0, 143, 16, 0, 0, 0, 143, 0, 0, 2, 0, 127, 0, 1, 47, 181, 110, 23, 218, 42, 239, 255, 255, 216, 0, 3, 255, 145, 0, 0, 10, 233, 226, 0, 0, 127, 81, 237, 0, 1, 252, 0, 111, 112, 0, 34, 0, 6, 0 };
/* + */ static const uint8_t Font_RobotoMono_Regular_20_glyph_43[] = { 10, 11, 96, 10, 95, 0, 0, 171, 0, 0, 0, 0, 239, 0, 0, 0, 0, 239, 0, 0, 0, 0, 239, 0, 0, 138, 170, 255, 170, 169, 223, 255, 255, 255, 254, 34, 34, 239, 34, 34, 0, 0, 239, 0, 0, 0, 0, 239, 0, 0, 0, 0, 239, 0, 0, 0, 0, 136, 0, 0 };
/* , */ static const uint8_t Font_RobotoMono_Regular_20_glyph_44[] = { 4, 7, 96, 28, 18, 1, 32, 11, 244, 11, 244, 12, 242, 15, 208, 95, 64, 1, 0 };
/* - */ static const uint8_t Font_RobotoMono_Regular_20_glyph_45[] = { 8, 2, 97, 17, 56, 223, 255, 255, 249, 120, 136, 136, 132 };
/* . */ static const uint8_t Font_RobotoMono_Regular_20_glyph_46[] = { 4, 4, 96, 39, 21, 5, 129, 31, 249, 14, 247, 0, 32 };
/* / */ static const uint8_t Font_RobotoMono_Regular_20_glyph_47[] = { 9, 17, 96, 20, 114, 0, 0, 0, 35, 0, 0, 0, 13, 176, 0, 0, 4, 245, 0, 0, 0, 174, 0, 0, 0, 15, 144, 0, 0, 6, 243, 0, 0, 0, 205, 0, 0, 0, 47, 96, 0, 0, 9, 241, 0, 0, 0, 234, 0, 0, 0, 95, 64, 0, 0, 11, 224, 0, 0, 1, 248, 0, 0, 0, 127, 32, 0, 0, 13, 176, 0, 0, 4, 245, 0, 0, 0, 19, 0, 0, 0, 0 };
/* 0 */ static const uint8_t Font_RobotoMono_Regular_20_glyph_48[] = { 10, 16, 96, 12, 116, 0, 2, 86, 32, 0, 0, 191, 255, 251, 0, 10, 248, 34, 143, 176, 47, 176, 0, 10, 242, 111, 96, 0, 5, 247, 143, 64, 0, 44, 249, 159, 48, 4, 238, 249, 159, 48, 143, 163, 250, 159, 92, 247, 3, 250, 159, 254, 48, 3, 249, 143, 177, 0, 3, 249, 95, 96, 0, 6, 246, 31, 192, 0, 12, 241, 7, 251, 85, 191, 128, 0, 126, 255, 248, 0, 0, 0, 34, 0, 0 };
/* 1 */ static const uint8_t Font_RobotoMono_Regular_20_glyph_49[] = { 6, 15, 96, 17, 114, 0, 0, 1, 0, 23, 217, 91, 255, 249, 254, 134, 249, 64, 4, 249, 0, 4, 249, 0, 4, 249, 0, 4, 249, 0, 4, 249, 0, 4, 249, 0, 4, 249, 0, 4, 249, 0, 4, 249, 0, 4, 249, 0, 4, 249 };
/* 2 */ static const uint8_t Font_RobotoMono_Regular_20_glyph_50[] = { 11, 15, 96, 7, 116, 0, 1, 86, 64, 0, 0, 7, 255, 255, 229, 0, 6, 252, 49, 94, 243, 0, 238, 0, 0, 95, 144, 31, 160, 0, 1, 251, 0, 0, 0, 0, 63, 144, 0, 0, 0, 10, 243, 0, 0, 0, 5, 249, 0, 0, 0, 3, 253, 0, 0, 0, 2, 238, 16, 0, 0, 1, 238, 32, 0, 0, 1, 223, 48, 0, 0, 0, 207, 64, 0, 0, 0, 175, 183, 119, 119, 115, 14, 255, 255, 255, 255, 96 };
/* 3 */ static const uint8_t Font_RobotoMono_Regular_20_glyph_51[] = { 10, 16, 96, 8, 116, 0, 1, 86, 64, 0, 0, 111, 255, 254, 80, 4, 252, 49, 77, 243, 12, 241, 0, 4, 249, 7, 112, 0, 2, 251, 0, 0, 0, 5, 248, 0, 0, 0, 78, 225, 0, 2, 255, 254, 32, 0, 1, 120, 191, 192, 0, 0, 0, 6, 249, 0, 0, 0, 0, 253, 12, 144, 0, 0, 254, 13, 241, 0, 3, 250, 4, 254, 117, 126, 243, 0, 77, 255, 251, 48, 0, 0, 18, 16, 0 };
/* 4 */ static const uint8_t Font_RobotoMono_Regular_20_glyph_52[] = { 11, 15, 96, 6, 114, 0, 0, 0, 3, 48, 0, 0, 0, 5, 255, 0, 0, 0, 1, 239, 240, 0, 0, 0, 175, 223, 0, 0, 0, 79, 108, 240, 0, 0, 14, 192, 207, 0, 0, 9, 242, 12, 240, 0, 3, 247, 0, 207, 0, 0, 221, 0, 12, 240, 0, 143, 48, 0, 207, 0, 47, 252, 204, 207, 252, 194, 187, 187, 187, 239, 187, 0, 0, 0, 12, 240, 0, 0, 0, 0, 207, 0, 0, 0, 0, 12, 240, 0 };
/* 5 */ static const uint8_t Font_RobotoMono_Regular_20_glyph_53[] = { 10, 16, 96, 15, 114, 0, 51, 51, 51, 49, 0, 255, 255, 255, 245, 1, 252, 136, 136, 131, 3, 247, 0, 0, 0, 5, 245, 0, 0, 0, 6, 244, 36, 32, 0, 8, 254, 255, 253, 32, 9, 251, 102, 191, 225, 0, 32, 0, 10, 247, 0, 0, 0, 3, 250, 0, 0, 0, 1, 251, 27, 112, 0, 2, 250, 14, 225, 0, 8, 246, 4, 253, 101, 159, 208, 0, 77, 255, 251, 16, 0, 0, 18, 16, 0 };
/* 6 */ static const uint8_t Font_RobotoMono_Regular_20_glyph_54[] = { 10, 16, 96, 11, 114, 0, 0, 1, 33, 0, 0, 5, 207, 245, 0, 0, 127, 250, 114, 0, 5, 252, 16, 0, 0, 13, 225, 0, 0, 0, 63, 128, 52, 32, 0, 111, 141, 255, 250, 0, 143, 250, 68, 207, 144, 159, 144, 0, 14, 241, 159, 48, 0, 8, 243, 143, 64, 0, 7, 245, 95, 112, 0, 9, 243, 31, 225, 0, 14, 224, 6, 253, 102, 223, 96, 0, 110, 255, 230, 0, 0, 0, 34, 0, 0 };
/* 7 */ static const uint8_t Font_RobotoMono_Regular_20_glyph_55[] = { 10, 15, 96, 9, 114, 51, 51, 51, 51, 50, 239, 255, 255, 255, 251, 85, 85, 85, 89, 246, 0, 0, 0, 11, 224, 0, 0, 0, 63, 112, 0, 0, 0, 175, 16, 0, 0, 2, 249, 0, 0, 0, 9, 242, 0, 0, 0, 31, 176, 0, 0, 0, 143, 64, 0, 0, 0, 237, 0, 0, 0, 7, 245, 0, 0, 0, 14, 224, 0, 0, 0, 111, 112, 0, 0, 0, 223, 16, 0, 0 };
/* 8 */ static const uint8_t Font_RobotoMono_Regular_20_glyph_56[] = { 10, 16, 96, 14, 116, 0, 1, 86, 64, 0, 0, 143, 255, 252, 32, 6, 252, 49, 127, 224, 12, 241, 0, 9, 245, 14, 224, 0, 6, 246, 12, 241, 0, 9, 244, 4, 252, 49, 111, 176, 0, 95, 255, 251, 0, 2, 238, 135, 207, 128, 13, 242, 0, 9, 245, 47, 160, 0, 2, 250, 63, 144, 0, 1, 251, 31, 224, 0, 7, 248, 7, 252, 101, 159, 225, 0, 110, 255, 250, 32, 0, 0, 34, 16, 0 };
/* 9 */ static const uint8_t Font_RobotoMono_Regular_20_glyph_57[] = { 10, 16, 96, 12, 116, 0, 3, 101, 16, 0, 1, 191, 255, 247, 0, 11, 249, 35, 223, 80, 63, 176, 0, 31, 224, 127, 80, 0, 10, 242, 143, 64, 0, 7, 245, 111, 96, 0, 6, 246, 63, 192, 0, 13, 246, 11, 251, 70, 223, 245, 0, 175, 255, 185, 242, 0, 1, 49, 11, 240, 0, 0, 0, 47, 144, 0, 0, 3, 239, 32, 0, 90, 223, 244, 0, 0, 143, 216, 16, 0, 0, 0, 0, 0, 0 };
/* : */ static const uint8_t Font_RobotoMono_Regular_20_glyph_58[] = { 4, 13, 96, 39, 93, 5, 129, 31, 249, 14, 247, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 129, 31, 249, 14, 247, 0, 32 };
/* ; */ static const uint8_t Font_RobotoMono_Regular_20_glyph_59[] = { 4, 16, 96, 36, 93, 5, 129, 31, 249, 14, 247, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 32, 11, 244, 11, 244, 12, 242, 15, 208, 95, 64, 1, 0 };
/* < */ static const uint8_t Font_RobotoMono_Regular_20_glyph_60[] = { 9, 10, 96, 14, 86, 0, 0, 0, 1, 112, 0, 0, 58, 255, 0, 5, 207, 252, 80, 109, 254, 130, 0, 95, 229, 0, 0, 2, 207, 232, 32, 0, 0, 58, 255, 198, 0, 0, 1, 143, 254, 0, 0, 0, 7, 192, 0, 0, 0, 0 };
/* = */ static const uint8_t Font_RobotoMono_Regular_20_glyph_61[] = { 10, 7, 96, 14, 74, 3, 51, 51, 51, 49, 95, 255, 255, 255, 246, 22, 102, 102, 102, 98, 0, 0, 0, 0, 0, 2, 34, 34, 34, 32, 95, 255, 255, 255, 246, 39, 119, 119, 119, 114 };
/* > */ static const uint8_t Font_RobotoMono_Regular_20_glyph_62[] = { 10, 10, 96, 14, 86, 38, 0, 0, 0, 0, 79, 248, 32, 0, 0, 6, 207, 251, 64, 0, 0, 2, 142, 253, 96, 0, 0, 0, 78, 245, 0, 0, 57, 255, 178, 1, 125, 255, 146, 0, 63, 254, 113, 0, 0, 76, 80, 0, 0, 0, 0, 0, 0, 0, 0 };
/* ? */ static const uint8_t Font_RobotoMono_Regular_20_glyph_63[] = { 10, 16, 96, 15, 116, 0, 2, 85, 48, 0, 0, 191, 255, 252, 32, 10, 250, 51, 143, 208, 31, 208, 0, 11, 242, 1, 16, 0, 9, 243, 0, 0, 0, 13, 240, 0, 0, 0, 143, 128, 0, 0, 7, 252, 0, 0, 0, 111, 192, 0, 0, 0, 223, 16, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 237, 0, 0, 0, 1, 253, 0, 0, 0, 0, 0, 0, 0 };
/* @ */ static const uint8_t Font_RobotoMono_Regular_20_glyph_64[] = { 12, 16, 96, 5, 114, 0, 0, 1, 49, 0, 0, 0, 3, 207, 255, 194, 0, 0, 63, 130, 2, 174, 16, 0, 230, 0, 66, 10, 144, 7, 192, 46, 255, 82, 240, 13, 80, 217, 10, 96, 227, 31, 19, 240, 12, 80, 196, 62, 7, 176, 13, 48, 196, 93, 9, 144, 14, 32, 210, 78, 9, 160, 31, 17, 224, 47, 6, 248, 223, 106, 128, 14, 80, 172, 69, 217, 0, 8, 209, 0, 0, 0, 0, 0, 206, 99, 55, 64, 0, 0, 8, 239, 253, 64, 0, 0, 0, 0, 0, 0, 0 };
/* A */ static const uint8_t Font_RobotoMono_Regular_20_glyph_65[] = { 12, 15, 96, 7, 114, 0, 0, 2, 48, 0, 0, 0, 0, 13, 241, 0, 0, 0, 0, 47, 246, 0, 0, 0, 0, 143, 252, 0, 0, 0, 0, 221, 159, 16, 0, 0, 2, 248, 79, 96, 0, 0, 7, 243, 15, 176, 0, 0, 12, 224, 10, 240, 0, 0, 31, 144, 5, 245, 0, 0, 111, 132, 69, 250, 0, 0, 207, 255, 255, 255, 0, 1, 251, 85, 85, 159, 64, 6, 245, 0, 0, 47, 144, 11, 241, 0, 0, 13, 224, 31, 176, 0, 0, 8, 243 };
/* B */ static const uint8_t Font_RobotoMono_Regular_20_glyph_66[] = { 10, 15, 96, 14, 114, 19, 51, 50, 0, 0, 95, 255, 255, 249, 16, 95, 165, 86, 191, 208, 95, 128, 0, 9, 246, 95, 128, 0, 5, 248, 95, 128, 0, 9, 245, 95, 146, 35, 159, 176, 95, 255, 255, 252, 0, 95, 165, 86, 159, 209, 95, 128, 0, 5, 249, 95, 128, 0, 0, 253, 95, 128, 0, 0, 253, 95, 128, 0, 8, 249, 95, 200, 137, 223, 209, 95, 255, 255, 199, 0 };
/* C */ static const uint8_t Font_RobotoMono_Regular_20_glyph_67[] = { 10, 16, 96, 9, 116, 0, 2, 86, 48, 0, 0, 159, 255, 253, 32, 10, 249, 34, 127, 208, 63, 160, 0, 7, 247, 159, 48, 0, 1, 252, 223, 0, 0, 0, 34, 238, 0, 0, 0, 0, 253, 0, 0, 0, 0, 253, 0, 0, 0, 0, 238, 0, 0, 0, 0, 207, 0, 0, 0, 67, 143, 64, 0, 1, 251, 47, 192, 0, 8, 245, 7, 252, 85, 175, 176, 0, 110, 255, 249, 0, 0, 0, 18, 0, 0 };
/* D */ static const uint8_t Font_RobotoMono_Regular_20_glyph_68[] = { 11, 15, 96, 13, 114, 19, 51, 32, 0, 0, 7, 255, 255, 250, 32, 0, 127, 132, 89, 255, 64, 7, 245, 0, 2, 238, 16, 127, 80, 0, 5, 248, 7, 245, 0, 0, 15, 208, 127, 80, 0, 0, 207, 7, 245, 0, 0, 11, 241, 127, 80, 0, 0, 191, 23, 245, 0, 0, 13, 240, 127, 80, 0, 0, 252, 7, 245, 0, 0, 127, 112, 127, 80, 0, 95, 208, 7, 250, 120, 207, 210, 0, 127, 255, 252, 112, 0, 0 };
/* E */ static const uint8_t Font_RobotoMono_Regular_20_glyph_69[] = { 10, 15, 96, 15, 114, 3, 51, 51, 51, 49, 63, 255, 255, 255, 246, 63, 181, 85, 85, 82, 63, 144, 0, 0, 0, 63, 144, 0, 0, 0, 63, 144, 0, 0, 0, 63, 145, 17, 17, 0, 63, 255, 255, 255, 128, 63, 198, 102, 102, 48, 63, 144, 0, 0, 0, 63, 144, 0, 0, 0, 63, 144, 0, 0, 0, 63, 144, 0, 0, 0, 63, 200, 136, 136, 132, 63, 255, 255, 255, 248 };
/* F */ static const uint8_t Font_RobotoMono_Regular_20_glyph_70[] = { 10, 15, 96, 15, 114, 3, 51, 51, 51, 50, 47, 255, 255, 255, 249, 47, 197, 85, 85, 83, 47, 176, 0, 0, 0, 47, 176, 0, 0, 0, 47, 176, 0, 0, 0, 47, 176, 0, 0, 0, 47, 253, 221, 221, 112, 47, 235, 187, 187, 112, 47, 176, 0, 0, 0, 47, 176, 0, 0, 0, 47, 176, 0, 0, 0, 47, 176, 0, 0, 0, 47, 176, 0, 0, 0, 47, 176, 0, 0, 0 };
/* G */ static const uint8_t Font_RobotoMono_Regular_20_glyph_71[] = { 11, 16, 96, 8, 116, 0, 0, 37, 99, 0, 0, 0, 159, 255, 253, 32, 0, 175, 163, 56, 253, 0, 63, 176, 0, 7, 248, 10, 243, 0, 0, 31, 192, 223, 0, 0, 0, 0, 15, 208, 0, 0, 0, 0, 252, 0, 0, 17, 17, 15, 192, 0, 191, 255, 224, 253, 0, 5, 119, 238, 12, 240, 0, 0, 13, 224, 127, 96, 0, 0, 222, 1, 254, 16, 0, 14, 224, 5, 254, 117, 125, 248, 0, 4, 223, 255, 196, 0, 0, 0, 18, 16, 0 };
/* H */ static const uint8_t Font_RobotoMono_Regular_20_glyph_72[] = { 10, 15, 96, 11, 114, 35, 0, 0, 0, 50, 175, 16, 0, 1, 249, 175, 16, 0, 1, 249, 175, 16, 0, 1, 249, 175, 16, 0, 1, 249, 175, 16, 0, 1, 249, 175, 33, 17, 19, 249, 175, 255, 255, 255, 249, 175, 118, 102, 103, 249, 175, 16, 0, 1, 249, 175, 16, 0, 1, 249, 175, 16, 0, 1, 249, 175, 16, 0, 1, 249, 175, 16, 0, 1, 249, 175, 16, 0, 1, 249 };
/* I */ static const uint8_t Font_RobotoMono_Regular_20_glyph_73[] = { 10, 15, 96, 14, 114, 19, 51, 51, 51, 49, 79, 255, 255, 255, 244, 21, 85, 254, 85, 81, 0, 0, 254, 0, 0, 0, 0, 254, 0, 0, 0, 0, 254, 0, 0, 0, 0, 254, 0, 0, 0, 0, 254, 0, 0, 0, 0, 254, 0, 0, 0, 0, 254, 0, 0, 0, 0, 254, 0, 0, 0, 0, 254, 0, 0, 0, 0, 254, 0, 0, 41, 153, 255, 153, 146, 79, 255, 255, 255, 244 };
/* J */ static const uint8_t Font_RobotoMono_Regular_20_glyph_74[] = { 11, 16, 96, 8, 114, 0, 0, 0, 0, 35, 0, 0, 0, 0, 10, 243, 0, 0, 0, 0, 175, 48, 0, 0, 0, 10, 243, 0, 0, 0, 0, 175, 48, 0, 0, 0, 10, 243, 0, 0, 0, 0, 175, 48, 0, 0, 0, 10, 243, 0, 0, 0, 0, 175, 48, 0, 0, 0, 10, 243, 1, 16, 0, 0, 175, 48, 254, 0, 0, 12, 241, 10, 245, 0, 4, 252, 0, 30, 249, 104, 255, 48, 0, 43, 255, 252, 32, 0, 0, 1, 33, 0, 0 };
/* K */ static const uint8_t Font_RobotoMono_Regular_20_glyph_75[] = { 11, 15, 96, 14, 114, 19, 16, 0, 0, 51, 5, 248, 0, 0, 127, 160, 95, 128, 0, 79, 208, 5, 248, 0, 47, 242, 0, 95, 128, 13, 244, 0, 5, 248, 11, 247, 0, 0, 95, 135, 251, 0, 0, 5, 252, 255, 160, 0, 0, 95, 254, 223, 64, 0, 5, 255, 35, 254, 0, 0, 95, 128, 8, 249, 0, 5, 248, 0, 13, 244, 0, 95, 128, 0, 63, 224, 5, 248, 0, 0, 159, 144, 95, 128, 0, 0, 223, 64 };
/* L */ static const uint8_t Font_RobotoMono_Regular_20_glyph_76[] = { 10, 15, 96, 16, 114, 3, 32, 0, 0, 0, 31, 176, 0, 0, 0, 31, 176, 0, 0, 0, 31, 176, 0, 0, 0, 31, 176, 0, 0, 0, 31, 176, 0, 0, 0, 31, 176, 0, 0, 0, 31, 176, 0, 0, 0, 31, 176, 0, 0, 0, 31, 176, 0, 0, 0, 31, 176, 0, 0, 0, 31, 176, 0, 0, 0, 31, 176, 0, 0, 0, 31, 232, 136, 136, 133, 31, 255, 255, 255, 251 };
/* M */ static const uint8_t Font_RobotoMono_Regular_20_glyph_77[] = { 10, 15, 96, 12, 114, 19, 32, 0, 1, 50, 143, 224, 0, 12, 252, 143, 243, 0, 31, 252, 143, 249, 0, 127, 252, 143, 190, 0, 203, 236, 143, 111, 50, 246, 236, 143, 47, 136, 241, 252, 143, 42, 221, 176, 252, 143, 37, 255, 80, 252, 143, 48, 255, 0, 252, 143, 48, 186, 0, 252, 143, 48, 0, 0, 252, 143, 48, 0, 0, 252, 143, 48, 0, 0, 252, 143, 48, 0, 0, 252 };
/* N */ static const uint8_t Font_RobotoMono_Regular_20_glyph_78[] = { 10, 15, 96, 12, 114, 35, 16, 0, 0, 50, 159, 144, 0, 3, 249, 159, 242, 0, 3, 249, 159, 250, 0, 3, 249, 159, 239, 32, 3, 249, 159, 111, 160, 3, 249, 159, 58, 243, 3, 249, 159, 50, 251, 3, 249, 159, 48, 159, 51, 249, 159, 48, 31, 195, 249, 159, 48, 9, 248, 249, 159, 48, 1, 255, 249, 159, 48, 0, 143, 249, 159, 48, 0, 31, 249, 159, 48, 0, 7, 249 };
/* O */ static const uint8_t Font_RobotoMono_Regular_20_glyph_79[] = { 10, 16, 96, 9, 116, 0, 2, 101, 32, 0, 0, 159, 255, 249, 0, 9, 251, 68, 191, 144, 47, 176, 0, 11, 242, 159, 48, 0, 4, 248, 207, 0, 0, 0, 252, 237, 0, 0, 0, 238, 253, 0, 0, 0, 223, 253, 0, 0, 0, 223, 237, 0, 0, 0, 238, 207, 0, 0, 0, 251, 143, 80, 0, 5, 247, 31, 208, 0, 13, 241, 6, 253, 119, 223, 96, 0, 110, 255, 230, 0, 0, 0, 34, 0, 0 };
/* P */ static const uint8_t Font_RobotoMono_Regular_20_glyph_80[] = { 11, 15, 96, 15, 114, 3, 51, 51, 16, 0, 2, 255, 255, 255, 212, 0, 47, 196, 68, 126, 245, 2, 250, 0, 0, 47, 224, 47, 160, 0, 0, 191, 34, 250, 0, 0, 11, 242, 47, 160, 0, 1, 254, 2, 251, 51, 54, 223, 96, 47, 255, 255, 253, 80, 2, 252, 68, 66, 0, 0, 47, 160, 0, 0, 0, 2, 250, 0, 0, 0, 0, 47, 160, 0, 0, 0, 2, 250, 0, 0, 0, 0, 47, 160, 0, 0, 0, 0 };
/* Q */ static const uint8_t Font_RobotoMono_Regular_20_glyph_81[] = { 12, 18, 96, 8, 116, 0, 0, 38, 98, 0, 0, 0, 10, 255, 255, 144, 0, 0, 175, 164, 74, 250, 0, 3, 250, 0, 0, 175, 48, 10, 242, 0, 0, 47, 160, 14, 224, 0, 0, 14, 224, 15, 192, 0, 0, 12, 240, 31, 176, 0, 0, 11, 241, 31, 176, 0, 0, 11, 241, 15, 192, 0, 0, 12, 240, 13, 224, 0, 0, 14, 208, 9, 243, 0, 0, 63, 144, 2, 252, 0, 0, 207, 32, 0, 127, 215, 125, 248, 0, 0, 6, 239, 255, 245, 0, 0, 0, 2, 35, 239, 128, 0, 0, 0, 0, 29, 225, 0, 0, 0, 0, 0, 32 };
/* R */ static const uint8_t Font_RobotoMono_Regular_20_glyph_82[] = { 11, 15, 96, 15, 114, 3, 51, 50, 0, 0, 3, 255, 255, 255, 161, 0, 63, 164, 69, 175, 209, 3, 249, 0, 0, 143, 112, 63, 144, 0, 2, 251, 3, 249, 0, 0, 47, 176, 63, 144, 0, 8, 247, 3, 250, 68, 90, 252, 0, 63, 255, 255, 249, 0, 3, 250, 51, 143, 96, 0, 63, 144, 0, 238, 0, 3, 249, 0, 7, 246, 0, 63, 144, 0, 15, 224, 3, 249, 0, 0, 143, 96, 63, 144, 0, 1, 254, 0 };
/* S */ static const uint8_t Font_RobotoMono_Regular_20_glyph_83[] = { 11, 16, 96, 10, 116, 0, 2, 86, 48, 0, 0, 10, 255, 255, 195, 0, 11, 250, 50, 127, 243, 4, 251, 0, 0, 95, 176, 111, 112, 0, 0, 221, 3, 252, 0, 0, 0, 0, 10, 253, 80, 0, 0, 0, 8, 255, 250, 32, 0, 0, 1, 125, 255, 128, 0, 0, 0, 4, 223, 112, 17, 0, 0, 2, 254, 12, 242, 0, 0, 14, 240, 127, 176, 0, 3, 253, 0, 191, 199, 105, 255, 48, 0, 110, 255, 251, 48, 0, 0, 2, 32, 0, 0 };
/* T */ static const uint8_t Font_RobotoMono_Regular_20_glyph_84[] = { 12, 15, 96, 6, 114, 3, 51, 51, 51, 51, 49, 79, 255, 255, 255, 255, 244, 21, 85, 94, 229, 85, 81, 0, 0, 13, 224, 0, 0, 0, 0, 13, 224, 0, 0, 0, 0, 13, 224, 0, 0, 0, 0, 13, 224, 0, 0, 0, 0, 13, 224, 0, 0, 0, 0, 13, 224, 0, 0, 0, 0, 13, 224, 0, 0, 0, 0, 13, 224, 0, 0, 0, 0, 13, 224, 0, 0, 0, 0, 13, 224, 0, 0, 0, 0, 13, 224, 0, 0, 0, 0, 13, 224, 0, 0 };
/* U */ static const uint8_t Font_RobotoMono_Regular_20_glyph_85[] = { 10, 16, 96, 11, 114, 35, 0, 0, 0, 50, 175, 16, 0, 2, 250, 175, 16, 0, 2, 250, 175, 16, 0, 2, 250, 175, 16, 0, 2, 250, 175, 16, 0, 2, 250, 175, 16, 0, 2, 250, 175, 16, 0, 2, 250, 175, 32, 0, 2, 250, 175, 32, 0, 2, 250, 159, 32, 0, 2, 249, 143, 80, 0, 5, 247, 47, 192, 0, 13, 242, 9, 252, 102, 223, 128, 0, 126, 255, 230, 0, 0, 0, 34, 0, 0 };
/* V */ static const uint8_t Font_RobotoMono_Regular_20_glyph_86[] = { 12, 15, 96, 6, 114, 3, 32, 0, 0, 2, 48, 31, 208, 0, 0, 14, 240, 12, 242, 0, 0, 63, 176, 7, 246, 0, 0, 127, 96, 2, 251, 0, 0, 207, 16, 0, 223, 0, 1, 252, 0, 0, 143, 64, 6, 246, 0, 0, 63, 144, 10, 241, 0, 0, 13, 224, 15, 192, 0, 0, 8, 243, 79, 112, 0, 0, 3, 247, 159, 32, 0, 0, 0, 236, 221, 0, 0, 0, 0, 159, 248, 0, 0, 0, 0, 79, 243, 0, 0, 0, 0, 15, 224, 0, 0 };
/* W */ static const uint8_t Font_RobotoMono_Regular_20_glyph_87[] = { 12, 15, 96, 6, 114, 3, 16, 2, 48, 0, 49, 63, 128, 12, 240, 3, 247, 31, 144, 15, 243, 5, 245, 15, 176, 47, 246, 7, 243, 13, 208, 95, 233, 8, 241, 11, 224, 126, 172, 10, 240, 9, 240, 172, 126, 12, 208, 7, 242, 217, 95, 29, 176, 5, 244, 246, 47, 79, 144, 3, 248, 243, 15, 143, 112, 1, 253, 241, 12, 223, 80, 0, 255, 224, 10, 255, 48, 0, 223, 176, 7, 255, 16, 0, 191, 128, 4, 255, 0, 0, 159, 96, 1, 253, 0 };
/* X */ static const uint8_t Font_RobotoMono_Regular_20_glyph_88[] = { 12, 15, 96, 7, 114, 3, 48, 0, 0, 3, 48, 10, 247, 0, 0, 63, 208, 1, 254, 16, 0, 207, 64, 0, 127, 128, 5, 251, 0, 0, 13, 241, 13, 242, 0, 0, 4, 250, 111, 128, 0, 0, 0, 191, 238, 0, 0, 0, 0, 47, 246, 0, 0, 0, 0, 79, 249, 0, 0, 0, 0, 223, 207, 32, 0, 0, 7, 247, 63, 176, 0, 0, 31, 224, 10, 245, 0, 0, 175, 80, 2, 254, 0, 4, 252, 0, 0, 143, 128, 13, 244, 0, 0, 30, 242 };
/* Y */ static const uint8_t Font_RobotoMono_Regular_20_glyph_89[] = { 12, 15, 96, 5, 114, 19, 32, 0, 0, 3, 48, 31, 224, 0, 0, 63, 208, 8, 246, 0, 0, 175, 80, 1, 253, 0, 1, 253, 0, 0, 159, 80, 9, 245, 0, 0, 31, 192, 31, 208, 0, 0, 9, 243, 127, 80, 0, 0, 1, 251, 237, 0, 0, 0, 0, 159, 245, 0, 0, 0, 0, 31, 208, 0, 0, 0, 0, 15, 192, 0, 0, 0, 0, 15, 192, 0, 0, 0, 0, 15, 176, 0, 0, 0, 0, 15, 176, 0, 0, 0, 0, 15, 176, 0, 0 };
/* Z */ static const uint8_t Font_RobotoMono_Regular_20_glyph_90[] = { 10, 15, 96, 9, 114, 35, 51, 51, 51, 48, 207, 255, 255, 255, 244, 69, 85, 85, 95, 241, 0, 0, 0, 143, 96, 0, 0, 3, 252, 0, 0, 0, 12, 243, 0, 0, 0, 111, 128, 0, 0, 1, 254, 0, 0, 0, 11, 244, 0, 0, 0, 95, 160, 0, 0, 0, 239, 16, 0, 0, 9, 246, 0, 0, 0, 63, 192, 0, 0, 0, 207, 168, 136, 136, 132, 223, 255, 255, 255, 248 };
/* [ */ static const uint8_t Font_RobotoMono_Regular_20_glyph_91[] = { 5, 21, 96, 34, 130, 52, 68, 13, 255, 240, 222, 51, 13, 224, 0, 222, 0, 13, 224, 0, 222, 0, 13, 224, 0, 222, 0, 13, 224, 0, 222, 0, 13, 224, 0, 222, 0, 13, 224, 0, 222, 0, 13, 224, 0, 222, 0, 13, 224, 0, 222, 119, 13, 255, 240, 0, 0, 0 };
/* \ */ static const uint8_t Font_RobotoMono_Regular_20_glyph_92[] = { 8, 17, 96, 18, 114, 35, 0, 0, 0, 127, 32, 0, 0, 31, 128, 0, 0, 11, 224, 0, 0, 5, 245, 0, 0, 0, 235, 0, 0, 0, 143, 16, 0, 0, 47, 112, 0, 0, 12, 208, 0, 0, 6, 243, 0, 0, 0, 250, 0, 0, 0, 175, 0, 0, 0, 63, 96, 0, 0, 13, 192, 0, 0, 7, 242, 0, 0, 1, 248, 0, 0, 0, 34 };
/* ] */ static const uint8_t Font_RobotoMono_Regular_20_glyph_93[] = { 5, 21, 96, 32, 130, 4, 68, 48, 255, 253, 3, 62, 208, 0, 237, 0, 14, 208, 0, 237, 0, 14, 208, 0, 237, 0, 14, 208, 0, 237, 0, 14, 208, 0, 237, 0, 14, 208, 0, 237, 0, 14, 208, 0, 237, 0, 14, 208, 0, 237, 7, 126, 208, 255, 253, 0, 0, 0 };
/* ^ */ static const uint8_t Font_RobotoMono_Regular_20_glyph_94[] = { 8, 9, 96, 18, 114, 0, 2, 32, 0, 0, 14, 224, 0, 0, 95, 245, 0, 0, 189, 235, 0, 2, 247, 143, 32, 9, 241, 31, 128, 14, 176, 11, 224, 111, 64, 4, 245, 70, 0, 0, 100 };
/* _ */ static const uint8_t Font_RobotoMono_Regular_20_glyph_95[] = { 10, 2, 96, 13, 0, 127, 255, 255, 255, 247, 55, 119, 119, 119, 115 };
/* ` */ static const uint8_t Font_RobotoMono_Regular_20_glyph_96[] = { 4, 4, 96, 33, 116, 87, 32, 46, 208, 3, 248, 0, 18 };
/* a */ static const uint8_t Font_RobotoMono_Regular_20_glyph_97[] = { 10, 12, 96, 13, 87, 0, 40, 187, 129, 0, 5, 255, 188, 255, 64, 31, 209, 0, 63, 224, 21, 48, 0, 11, 242, 0, 2, 70, 108, 242, 4, 223, 254, 239, 242, 31, 228, 0, 10, 242, 111, 96, 0, 10, 242, 111, 128, 0, 46, 242, 31, 249, 105, 255, 243, 3, 223, 255, 136, 246, 0, 1, 32, 0, 0 };
/* b */ static const uint8_t Font_RobotoMono_Regular_20_glyph_98[] = { 10, 16, 96, 14, 120, 79, 128, 0, 0, 0, 79, 128, 0, 0, 0, 79, 128, 0, 0, 0, 79, 128, 0, 0, 0, 79, 132, 171, 147, 0, 79, 223, 221, 255, 80, 79, 244, 0, 79, 224, 79, 144, 0, 9, 245, 79, 128, 0, 4, 249, 79, 128, 0, 2, 250, 79, 128, 0, 3, 249, 79, 128, 0, 6, 247, 79, 192, 0, 13, 242, 79, 252, 102, 207, 160, 79, 122, 255, 249, 0, 0, 0, 18, 16, 0 };
/* c */ static const uint8_t Font_RobotoMono_Regular_20_glyph_99[] = { 10, 12, 96, 12, 87, 0, 7, 187, 146, 0, 2, 239, 220, 255, 96, 13, 245, 0, 45, 242, 79, 160, 0, 5, 246, 143, 80, 0, 0, 16, 159, 48, 0, 0, 0, 159, 64, 0, 0, 0, 111, 112, 0, 1, 82, 31, 208, 0, 8, 245, 7, 253, 85, 159, 192, 0, 110, 255, 248, 0, 0, 0, 34, 0, 0 };
/* d */ static const uint8_t Font_RobotoMono_Regular_20_glyph_100[] = { 10, 16, 96, 11, 120, 0, 0, 0, 8, 244, 0, 0, 0, 8, 244, 0, 0, 0, 8, 244, 0, 0, 0, 8, 244, 0, 41, 186, 72, 244, 4, 255, 221, 254, 244, 14, 245, 0, 79, 244, 95, 144, 0, 8, 244, 143, 64, 0, 8, 244, 175, 48, 0, 8, 244, 159, 48, 0, 8, 244, 127, 96, 0, 8, 244, 31, 208, 0, 12, 244, 8, 253, 102, 207, 244, 0, 143, 255, 184, 244, 0, 0, 33, 0, 0 };
/* e */ static const uint8_t Font_RobotoMono_Regular_20_glyph_101[] = { 10, 12, 96, 11, 87, 0, 6, 187, 130, 0, 1, 223, 220, 255, 80, 12, 245, 0, 46, 241, 79, 144, 0, 6, 246, 159, 116, 68, 70, 249, 175, 255, 255, 255, 250, 175, 99, 51, 51, 50, 127, 96, 0, 0, 0, 47, 225, 0, 1, 112, 7, 254, 116, 125, 243, 0, 93, 255, 252, 48, 0, 0, 18, 16, 0 };
/* f */ static const uint8_t Font_RobotoMono_Regular_20_glyph_102[] = { 11, 16, 97, 12, 124, 0, 0, 0, 70, 82, 0, 0, 4, 239, 255, 240, 0, 1, 255, 98, 36, 0, 0, 127, 112, 0, 0, 0, 9, 244, 0, 0, 4, 153, 223, 169, 153, 32, 109, 222, 253, 221, 211, 0, 0, 159, 48, 0, 0, 0, 9, 243, 0, 0, 0, 0, 159, 48, 0, 0, 0, 9, 243, 0, 0, 0, 0, 159, 48, 0, 0, 0, 9, 243, 0, 0, 0, 0, 159, 48, 0, 0, 0, 9, 243, 0, 0, 0, 0, 159, 48, 0, 0 };
/* g */ static const uint8_t Font_RobotoMono_Regular_20_glyph_103[] = { 10, 16, 96, 11, 87, 0, 41, 186, 67, 146, 4, 255, 221, 253, 244, 14, 245, 0, 63, 244, 95, 144, 0, 8, 244, 143, 64, 0, 8, 244, 159, 48, 0, 8, 244, 159, 48, 0, 8, 244, 127, 96, 0, 8, 244, 31, 208, 0, 12, 244, 9, 253, 102, 207, 244, 0, 159, 255, 185, 244, 0, 0, 33, 10, 243, 5, 32, 0, 30, 240, 13, 248, 87, 223, 112, 1, 159, 255, 230, 0, 0, 0, 17, 0, 0 };
/* h */ static const uint8_t Font_RobotoMono_Regular_20_glyph_104[] = { 10, 15, 96, 14, 120, 79, 128, 0, 0, 0, 79, 128, 0, 0, 0, 79, 128, 0, 0, 0, 79, 128, 0, 0, 0, 79, 129, 139, 166, 0, 79, 174, 237, 255, 144, 79, 245, 0, 46, 242, 79, 128, 0, 7, 245, 79, 128, 0, 6, 246, 79, 128, 0, 6, 247, 79, 128, 0, 6, 247, 79, 128, 0, 6, 247, 79, 128, 0, 6, 247, 79, 128, 0, 6, 247, 79, 128, 0, 6, 247 };
/* i */ static const uint8_t Font_RobotoMono_Regular_20_glyph_105[] = { 10, 15, 96, 16, 116, 0, 0, 21, 0, 0, 0, 0, 159, 112, 0, 0, 0, 58, 32, 0, 0, 0, 0, 0, 0, 9, 153, 153, 48, 0, 15, 255, 255, 96, 0, 0, 0, 111, 96, 0, 0, 0, 111, 96, 0, 0, 0, 111, 96, 0, 0, 0, 111, 96, 0, 0, 0, 111, 96, 0, 0, 0, 111, 96, 0, 0, 0, 111, 96, 0, 9, 153, 191, 185, 151, 15, 255, 255, 255, 253 };
/* j */ static const uint8_t Font_RobotoMono_Regular_20_glyph_106[] = { 7, 20, 96, 17, 116, 0, 0, 37, 0, 0, 12, 244, 0, 0, 89, 16, 0, 0, 0, 9, 153, 153, 33, 255, 255, 244, 0, 0, 143, 64, 0, 8, 244, 0, 0, 143, 64, 0, 8, 244, 0, 0, 143, 64, 0, 8, 244, 0, 0, 143, 64, 0, 8, 244, 0, 0, 143, 64, 0, 9, 243, 0, 0, 223, 20, 69, 191, 160, 239, 255, 144, 2, 51, 16, 0 };
/* k */ static const uint8_t Font_RobotoMono_Regular_20_glyph_107[] = { 11, 15, 96, 14, 120, 79, 128, 0, 0, 0, 4, 248, 0, 0, 0, 0, 79, 128, 0, 0, 0, 4, 248, 0, 0, 0, 0, 79, 128, 0, 24, 129, 4, 248, 0, 28, 245, 0, 79, 128, 28, 246, 0, 4, 248, 28, 246, 0, 0, 79, 156, 247, 0, 0, 4, 255, 255, 160, 0, 0, 79, 246, 207, 96, 0, 4, 249, 1, 239, 48, 0, 79, 128, 3, 254, 16, 4, 248, 0, 7, 252, 0, 79, 128, 0, 10, 250, 0 };
/* l */ static const uint8_t Font_RobotoMono_Regular_20_glyph_108[] = { 10, 15, 96, 16, 120, 15, 255, 255, 96, 0, 9, 153, 207, 96, 0, 0, 0, 111, 96, 0, 0, 0, 111, 96, 0, 0, 0, 111, 96, 0, 0, 0, 111, 96, 0, 0, 0, 111, 96, 0, 0, 0, 111, 96, 0, 0, 0, 111, 96, 0, 0, 0, 111, 96, 0, 0, 0, 111, 96, 0, 0, 0, 111, 96, 0, 0, 0, 111, 96, 0, 9, 153, 191, 185, 151, 15, 255, 255, 255, 253 };
/* m */ static const uint8_t Font_RobotoMono_Regular_20_glyph_109[] = { 12, 11, 96, 8, 87, 9, 70, 185, 22, 185, 16, 31, 238, 239, 238, 223, 192, 31, 192, 15, 241, 11, 240, 31, 160, 13, 208, 9, 241, 31, 160, 13, 208, 9, 241, 31, 160, 13, 208, 9, 241, 31, 160, 13, 208, 9, 241, 31, 160, 13, 208, 9, 241, 31, 160, 13, 208, 9, 241, 31, 160, 13, 208, 9, 241, 31, 160, 13, 208, 9, 241 };
/* n */ static const uint8_t Font_RobotoMono_Regular_20_glyph_110[] = { 10, 11, 96, 14, 87, 41, 49, 139, 166, 0, 79, 158, 237, 255, 144, 79, 245, 0, 30, 242, 79, 144, 0, 8, 245, 79, 128, 0, 6, 246, 79, 128, 0, 6, 246, 79, 128, 0, 6, 246, 79, 128, 0, 6, 246, 79, 128, 0, 6, 246, 79, 128, 0, 6, 246, 79, 128, 0, 6, 246 };
/* o */ static const uint8_t Font_RobotoMono_Regular_20_glyph_111[] = { 10, 12, 96, 10, 87, 0, 24, 187, 129, 0, 4, 255, 204, 255, 48, 30, 243, 0, 79, 225, 127, 112, 0, 7, 247, 191, 32, 0, 2, 251, 207, 0, 0, 0, 252, 207, 16, 0, 1, 251, 159, 64, 0, 4, 249, 63, 192, 0, 12, 243, 9, 251, 85, 207, 144, 0, 143, 255, 231, 0, 0, 0, 34, 0, 0 };
/* p */ static const uint8_t Font_RobotoMono_Regular_20_glyph_112[] = { 10, 16, 96, 14, 87, 41, 52, 171, 147, 0, 95, 223, 221, 255, 64, 95, 243, 0, 95, 224, 95, 128, 0, 10, 245, 95, 128, 0, 5, 248, 95, 128, 0, 3, 249, 95, 128, 0, 4, 249, 95, 128, 0, 7, 246, 95, 176, 0, 13, 242, 95, 251, 85, 223, 144, 95, 155, 255, 249, 0, 95, 128, 18, 16, 0, 95, 128, 0, 0, 0, 95, 128, 0, 0, 0, 95, 128, 0, 0, 0, 1, 0, 0, 0, 0 };
/* q */ static const uint8_t Font_RobotoMono_Regular_20_glyph_113[] = { 10, 16, 96, 11, 87, 0, 41, 186, 67, 146, 4, 255, 204, 253, 244, 14, 245, 0, 46, 244, 95, 144, 0, 8, 244, 143, 64, 0, 8, 244, 159, 48, 0, 8, 244, 159, 48, 0, 8, 244, 127, 96, 0, 8, 244, 47, 208, 0, 11, 244, 9, 252, 85, 191, 244, 0, 159, 255, 186, 244, 0, 0, 33, 8, 244, 0, 0, 0, 8, 244, 0, 0, 0, 8, 244, 0, 0, 0, 8, 244, 0, 0, 0, 0, 16 };
/* r */ static const uint8_t Font_RobotoMono_Regular_20_glyph_114[] = { 8, 11, 96, 26, 87, 120, 3, 155, 180, 207, 111, 255, 245, 207, 247, 32, 32, 207, 96, 0, 0, 207, 0, 0, 0, 207, 0, 0, 0, 207, 0, 0, 0, 207, 0, 0, 0, 207, 0, 0, 0, 207, 0, 0, 0, 207, 0, 0, 0 };
/* s */ static const uint8_t Font_RobotoMono_Regular_20_glyph_115[] = { 10, 12, 96, 14, 87, 0, 23, 171, 147, 0, 2, 239, 204, 255, 128, 12, 243, 0, 29, 243, 14, 224, 0, 3, 131, 8, 251, 64, 0, 0, 0, 126, 255, 199, 0, 0, 0, 72, 223, 192, 20, 32, 0, 9, 246, 47, 192, 0, 6, 247, 10, 251, 84, 126, 225, 0, 143, 255, 251, 48, 0, 0, 34, 0, 0 };
/* t */ static const uint8_t Font_RobotoMono_Regular_20_glyph_116[] = { 10, 15, 96, 12, 105, 0, 1, 16, 0, 0, 0, 13, 240, 0, 0, 0, 13, 240, 0, 0, 89, 158, 249, 153, 144, 141, 223, 253, 221, 208, 0, 13, 240, 0, 0, 0, 13, 240, 0, 0, 0, 13, 240, 0, 0, 0, 13, 240, 0, 0, 0, 13, 240, 0, 0, 0, 13, 240, 0, 0, 0, 12, 242, 0, 0, 0, 6, 253, 102, 130, 0, 0, 159, 255, 243, 0, 0, 0, 34, 0 };
/* u */ static const uint8_t Font_RobotoMono_Regular_20_glyph_117[] = { 10, 12, 96, 15, 85, 41, 80, 0, 4, 146, 63, 144, 0, 8, 244, 63, 144, 0, 8, 244, 63, 144, 0, 8, 244, 63, 144, 0, 8, 244, 63, 144, 0, 8, 244, 63, 144, 0, 8, 244, 47, 144, 0, 8, 244, 15, 208, 0, 12, 244, 10, 250, 86, 222, 244, 1, 191, 255, 150, 244, 0, 1, 32, 0, 0 };
/* v */ static const uint8_t Font_RobotoMono_Regular_20_glyph_118[] = { 11, 11, 96, 8, 85, 8, 128, 0, 0, 8, 112, 159, 48, 0, 4, 248, 3, 249, 0, 0, 175, 32, 12, 240, 0, 15, 176, 0, 111, 80, 5, 245, 0, 0, 235, 0, 190, 0, 0, 8, 241, 31, 128, 0, 0, 47, 119, 241, 0, 0, 0, 189, 219, 0, 0, 0, 5, 255, 64, 0, 0, 0, 14, 224, 0, 0 };
/* w */ static const uint8_t Font_RobotoMono_Regular_20_glyph_119[] = { 12, 11, 96, 4, 85, 73, 16, 5, 96, 0, 133, 79, 64, 12, 224, 2, 246, 31, 112, 15, 242, 5, 243, 14, 160, 78, 214, 8, 240, 10, 208, 140, 170, 10, 192, 7, 240, 200, 126, 13, 128, 3, 243, 244, 63, 47, 80, 0, 249, 240, 14, 143, 32, 0, 222, 192, 10, 238, 0, 0, 159, 128, 6, 251, 0, 0, 111, 64, 2, 247, 0 };
/* x */ static const uint8_t Font_RobotoMono_Regular_20_glyph_120[] = { 11, 11, 96, 9, 85, 89, 64, 0, 2, 151, 1, 238, 16, 0, 223, 48, 4, 251, 0, 159, 112, 0, 8, 247, 95, 176, 0, 0, 11, 255, 225, 0, 0, 0, 31, 244, 0, 0, 0, 8, 255, 176, 0, 0, 4, 251, 143, 112, 0, 1, 238, 16, 207, 48, 0, 207, 64, 1, 238, 16, 143, 128, 0, 5, 251, 0 };
/* y */ static const uint8_t Font_RobotoMono_Regular_20_glyph_121[] = { 12, 16, 96, 6, 85, 25, 112, 0, 0, 7, 145, 13, 242, 0, 0, 47, 208, 6, 249, 0, 0, 143, 96, 0, 239, 0, 0, 238, 0, 0, 127, 96, 5, 248, 0, 0, 31, 208, 11, 241, 0, 0, 9, 244, 47, 160, 0, 0, 2, 250, 143, 48, 0, 0, 0, 191, 236, 0, 0, 0, 0, 63, 244, 0, 0, 0, 0, 14, 208, 0, 0, 0, 0, 79, 96, 0, 0, 0, 0, 222, 0, 0, 0, 1, 91, 246, 0, 0, 0, 7, 255, 128, 0, 0, 0, 1, 49, 0, 0, 0, 0 };
/* z */ static const uint8_t Font_RobotoMono_Regular_20_glyph_122[] = { 10, 11, 96, 13, 85, 57, 153, 153, 153, 146, 94, 238, 238, 239, 243, 0, 0, 0, 159, 144, 0, 0, 6, 252, 0, 0, 0, 63, 225, 0, 0, 1, 239, 48, 0, 0, 13, 245, 0, 0, 0, 175, 128, 0, 0, 7, 251, 0, 0, 0, 79, 248, 119, 119, 116, 127, 255, 255, 255, 249 };
/* { */ static const uint8_t Font_RobotoMono_Regular_20_glyph_123[] = { 7, 20, 96, 26, 125, 0, 0, 6, 80, 0, 29, 230, 0, 9, 242, 0, 0, 236, 0, 0, 31, 176, 0, 2, 251, 0, 0, 47, 160, 0, 4, 248, 0, 0, 191, 48, 10, 238, 80, 0, 174, 229, 0, 0, 11, 243, 0, 0, 79, 128, 0, 2, 250, 0, 0, 47, 176, 0, 1, 251, 0, 0, 14, 208, 0, 0, 143, 64, 0, 0, 207, 96, 0, 0, 85 };
/* | */ static const uint8_t Font_RobotoMono_Regular_20_glyph_124[] = { 2, 19, 96, 43, 114, 34, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 187, 170 };
/* } */ static const uint8_t Font_RobotoMono_Regular_20_glyph_125[] = { 7, 20, 96, 26, 125, 85, 0, 0, 7, 236, 0, 0, 4, 247, 0, 0, 14, 208, 0, 0, 207, 0, 0, 12, 240, 0, 0, 207, 0, 0, 10, 242, 0, 0, 79, 160, 0, 0, 111, 233, 0, 6, 254, 144, 4, 250, 0, 0, 175, 32, 0, 12, 240, 0, 0, 207, 0, 0, 12, 240, 0, 0, 253, 0, 0, 111, 96, 0, 143, 160, 0, 5, 80, 0, 0 };
/* ~ */ static const uint8_t Font_RobotoMono_Regular_20_glyph_126[] = { 12, 5, 96, 4, 63, 1, 172, 163, 0, 0, 66, 14, 252, 255, 112, 1, 246, 95, 32, 27, 253, 157, 241, 54, 0, 0, 126, 254, 64, 0, 0, 0, 0, 0, 0 };

const uint8_t * const Font_RobotoMono_Regular_20[126 + 1 - 32] = {
    Font_RobotoMono_Regular_20_glyph_32,
    Font_RobotoMono_Regular_20_glyph_33,
    Font_RobotoMono_Regular_20_glyph_34,
    Font_RobotoMono_Regular_20_glyph_35,
    Font_RobotoMono_Regular_20_glyph_36,
    Font_RobotoMono_Regular_20_glyph_37,
    Font_RobotoMono_Regular_20_glyph_38,
    Font_RobotoMono_Regular_20_glyph_39,
    Font_RobotoMono_Regular_20_glyph_40,
    Font_RobotoMono_Regular_20_glyph_41,
    Font_RobotoMono_Regular_20_glyph_42,
    Font_RobotoMono_Regular_20_glyph_43,
    Font_RobotoMono_Regular_20_glyph_44,
    Font_RobotoMono_Regular_20_glyph_45,
    Font_RobotoMono_Regular_20_glyph_46,
    Font_RobotoMono_Regular_20_glyph_47,
    Font_RobotoMono_Regular_20_glyph_48,
    Font_RobotoMono_Regular_20_glyph_49,
    Font_RobotoMono_Regular_20_glyph_50,
    Font_RobotoMono_Regular_20_glyph_51,
    Font_RobotoMono_Regular_20_glyph_52,
    Font_RobotoMono_Regular_20_glyph_53,
    Font_RobotoMono_Regular_20_glyph_54,
    Font_RobotoMono_Regular_20_glyph_55,
    Font_RobotoMono_Regular_20_glyph_56,
    Font_RobotoMono_Regular_20_glyph_57,
    Font_RobotoMono_Regular_20_glyph_58,
    Font_RobotoMono_Regular_20_glyph_59,
    Font_RobotoMono_Regular_20_glyph_60,
    Font_RobotoMono_Regular_20_glyph_61,
    Font_RobotoMono_Regular_20_glyph_62,
    Font_RobotoMono_Regular_20_glyph_63,
    Font_RobotoMono_Regular_20_glyph_64,
    Font_RobotoMono_Regular_20_glyph_65,
    Font_RobotoMono_Regular_20_glyph_66,
    Font_RobotoMono_Regular_20_glyph_67,
    Font_RobotoMono_Regular_20_glyph_68,
    Font_RobotoMono_Regular_20_glyph_69,
    Font_RobotoMono_Regular_20_glyph_70,
    Font_RobotoMono_Regular_20_glyph_71,
    Font_RobotoMono_Regular_20_glyph_72,
    Font_RobotoMono_Regular_20_glyph_73,
    Font_RobotoMono_Regular_20_glyph_74,
    Font_RobotoMono_Regular_20_glyph_75,
    Font_RobotoMono_Regular_20_glyph_76,
    Font_RobotoMono_Regular_20_glyph_77,
    Font_RobotoMono_Regular_20_glyph_78,
    Font_RobotoMono_Regular_20_glyph_79,
    Font_RobotoMono_Regular_20_glyph_80,
    Font_RobotoMono_Regular_20_glyph_81,
    Font_RobotoMono_Regular_20_glyph_82,
    Font_RobotoMono_Regular_20_glyph_83,
    Font_RobotoMono_Regular_20_glyph_84,
    Font_RobotoMono_Regular_20_glyph_85,
    Font_RobotoMono_Regular_20_glyph_86,
    Font_RobotoMono_Regular_20_glyph_87,
    Font_RobotoMono_Regular_20_glyph_88,
    Font_RobotoMono_Regular_20_glyph_89,
    Font_RobotoMono_Regular_20_glyph_90,
    Font_RobotoMono_Regular_20_glyph_91,
    Font_RobotoMono_Regular_20_glyph_92,
    Font_RobotoMono_Regular_20_glyph_93,
    Font_RobotoMono_Regular_20_glyph_94,
    Font_RobotoMono_Regular_20_glyph_95,
    Font_RobotoMono_Regular_20_glyph_96,
    Font_RobotoMono_Regular_20_glyph_97,
    Font_RobotoMono_Regular_20_glyph_98,
    Font_RobotoMono_Regular_20_glyph_99,
    Font_RobotoMono_Regular_20_glyph_100,
    Font_RobotoMono_Regular_20_glyph_101,
    Font_RobotoMono_Regular_20_glyph_102,
    Font_RobotoMono_Regular_20_glyph_103,
    Font_RobotoMono_Regular_20_glyph_104,
    Font_RobotoMono_Regular_20_glyph_105,
    Font_RobotoMono_Regular_20_glyph_106,
    Font_RobotoMono_Regular_20_glyph_107,
    Font_RobotoMono_Regular_20_glyph_108,
    Font_RobotoMono_Regular_20_glyph_109,
    Font_RobotoMono_Regular_20_glyph_110,
    Font_RobotoMono_Regular_20_glyph_111,
    Font_RobotoMono_Regular_20_glyph_112,
    Font_RobotoMono_Regular_20_glyph_113,
    Font_RobotoMono_Regular_20_glyph_114,
    Font_RobotoMono_Regular_20_glyph_115,
    Font_RobotoMono_Regular_20_glyph_116,
    Font_RobotoMono_Regular_20_glyph_117,
    Font_RobotoMono_Regular_20_glyph_118,
    Font_RobotoMono_Regular_20_glyph_119,
    Font_RobotoMono_Regular_20_glyph_120,
    Font_RobotoMono_Regular_20_glyph_121,
    Font_RobotoMono_Regular_20_glyph_122,
    Font_RobotoMono_Regular_20_glyph_123,
    Font_RobotoMono_Regular_20_glyph_124,
    Font_RobotoMono_Regular_20_glyph_125,
    Font_RobotoMono_Regular_20_glyph_126,
};
