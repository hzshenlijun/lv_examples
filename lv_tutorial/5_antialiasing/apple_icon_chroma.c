#include <stdint.h>
#include "lv_conf.h"
#include "lv_ex_conf.h"
#include "lvgl/lv_draw/lv_draw.h"

#if USE_LV_TUTORIALS

static const uint8_t apple_icon_chroma_pixel_map[] = {

#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
    /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/

    0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x64, 0x64, 0xad, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x8d, 0x64, 0x64, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x64, 0x64, 0x89, 0x1c, 0x1c, 0x75, 0x95, 0x75, 0x95, 0x95, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x64, 0x64, 0x1c, 0x99, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x95, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x64, 0x60, 0x89, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x64, 0x60, 0x95, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x75, 0x95, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xe5, 0x64, 0x64, 0xe9, 0xc9, 0xc9, 0xad, 0xad, 0x91, 0xad, 0xc9, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xe5, 0x64, 0x64, 0xe5, 0xc5, 0xc5, 0xc5, 0xc5, 0xe5, 0xc5, 0xc5, 0xc5, 0xe5, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc4, 0xc4, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0xed, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xe9, 0x1c, 0x1c,
    0x1c, 0x1c, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0x1c, 0x1c,
    0x1c, 0x1c, 0xed, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xe9, 0x1c, 0x1c,
    0x1c, 0x1c, 0xc4, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0x1c, 0x1c,
    0x1c, 0x1c, 0xee, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xed, 0x1c, 0x1c,
    0x1c, 0x1c, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xed, 0x1c, 0x1c,
    0x1c, 0x1c, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0xe5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0xe9, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xe9, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0xe9, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xe9, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0xe9, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xe9, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xc5, 0xe9, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c,
    0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0xc5, 0xc4, 0xc5, 0xc5, 0xe9, 0xc5, 0xc5, 0xe9, 0xc5, 0xc5, 0xc5, 0xe9, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c,

#elif LV_COLOR_DEPTH == 16
    /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/

    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe6, 0x79, 0x43, 0x69, 0xef, 0xab, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0x0b, 0x93, 0x02, 0x61, 0x02, 0x69, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0x23, 0x69, 0x02, 0x61, 0xaa, 0x8a, 0xe0, 0x07, 0xe0, 0x07, 0xab, 0x7d, 0xed, 0x8d, 0xab, 0x7d, 0xee, 0x8d, 0xed, 0x8d, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0x02, 0x61, 0x64, 0x69, 0xe0, 0x07, 0x0f, 0x96, 0x8a, 0x75, 0x8a, 0x75, 0x8a, 0x75, 0x8a, 0x75, 0x8a, 0x75, 0x8a, 0x75, 0x8a, 0x75, 0xac, 0x85, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xa5, 0x71, 0xe2, 0x60, 0x69, 0x8a, 0xab, 0x7d, 0x8a, 0x75, 0x8a, 0x75, 0x8a, 0x75, 0x8a, 0x75, 0x8a, 0x75, 0x8a, 0x75, 0x8a, 0x75, 0x8a, 0x75, 0x8a, 0x75, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0x23, 0x69, 0xa1, 0x60, 0xec, 0x85, 0x8a, 0x75, 0x8a, 0x75, 0x8a, 0x75, 0x8a, 0x75, 0x8a, 0x75, 0x8a, 0x75, 0x8a, 0x75, 0x8b, 0x7d, 0xcc, 0x85, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xc9, 0xd9, 0x89, 0xd9, 0x89, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x89, 0xd9, 0xa9, 0xd9, 0xca, 0xe1, 0x44, 0x71, 0x43, 0x71, 0x8c, 0xe2, 0x29, 0xca, 0x69, 0xc2, 0x29, 0xb3, 0xe9, 0xa3, 0x29, 0x9c, 0xa9, 0xa3, 0xea, 0xc2, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xa9, 0xd9, 0x89, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xe1, 0x03, 0x71, 0x03, 0x71, 0x68, 0xe1, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x48, 0xd9, 0x48, 0xe1, 0x68, 0xd9, 0x68, 0xd9, 0xa9, 0xd9, 0xea, 0xe1, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x67, 0xc9, 0x67, 0xc9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x88, 0xd9, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xea, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0xca, 0xd9, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x88, 0xd9, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0x0e, 0xe3, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0xcd, 0xe2, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0x28, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x88, 0xd9, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0x2f, 0xe3, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x8d, 0xe2, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0x27, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x48, 0xd9, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xb0, 0xeb, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x2e, 0xe3, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xa9, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x6f, 0xe3, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xa9, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x88, 0xd9, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x88, 0xd9, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xea, 0xe1, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0x0a, 0xe2, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x0b, 0xe2, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x88, 0xd9, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xa9, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x89, 0xd9, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xcd, 0xe2, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x4b, 0xe2, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0xa9, 0xd9, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0x6c, 0xe2, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x0a, 0xe2, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0x89, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0xea, 0xd9, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xa9, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0xa9, 0xd9, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0x88, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x68, 0xd9, 0x88, 0xd9, 0xcd, 0xe2, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,
    0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xea, 0xd9, 0x27, 0xd9, 0x48, 0xd9, 0xa9, 0xd9, 0x8c, 0xe2, 0xa9, 0xd9, 0xa9, 0xd9, 0x8c, 0xe2, 0xc9, 0xd9, 0x48, 0xd9, 0x48, 0xd9, 0x0a, 0xe2, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07, 0xe0, 0x07,

#elif LV_COLOR_DEPTH == 24
    /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/

    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x37, 0x3e, 0x7c, 0xff, 0x1c, 0x29, 0x6c, 0xff, 0x7d, 0x7f, 0xa9, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x5d, 0x61, 0x95, 0xff, 0x13, 0x20, 0x66, 0xff, 0x16, 0x23, 0x68, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x19, 0x25, 0x69, 0xff, 0x13, 0x21, 0x66, 0xff, 0x50, 0x57, 0x8a, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x5e, 0xb7, 0x7f, 0xff, 0x6e, 0xbd, 0x8a, 0xff, 0x58, 0xb4, 0x7b, 0xff, 0x70, 0xbe, 0x8c, 0xff, 0x6f, 0xbe, 0x8c, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x12, 0x20, 0x65, 0xff, 0x20, 0x2d, 0x6e, 0xff, 0x00, 0xff, 0x00, 0xff, 0x7b, 0xc3, 0x95, 0xff, 0x54, 0xb2, 0x76, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x61, 0xb7, 0x80, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x2e, 0x37, 0x77, 0xff, 0x10, 0x1f, 0x64, 0xff, 0x4a, 0x4c, 0x8a, 0xff, 0x59, 0xb4, 0x7b, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x1a, 0x26, 0x6a, 0xff, 0x0b, 0x15, 0x62, 0xff, 0x64, 0xbd, 0x82, 0xff, 0x54, 0xb3, 0x75, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x55, 0xb2, 0x77, 0xff, 0x58, 0xb3, 0x79, 0xff, 0x65, 0xb9, 0x84, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x4f, 0x3a, 0xdf, 0xff, 0x49, 0x33, 0xde, 0xff, 0x48, 0x32, 0xde, 0xff, 0x42, 0x2c, 0xdd, 0xff, 0x42, 0x2c, 0xdd, 0xff, 0x48, 0x32, 0xde, 0xff, 0x4a, 0x35, 0xde, 0xff, 0x50, 0x39, 0xe4, 0xff, 0x20, 0x2a, 0x74, 0xff, 0x1e, 0x29, 0x70, 0xff, 0x61, 0x50, 0xe7, 0xff, 0x4b, 0x47, 0xce, 0xff, 0x49, 0x4f, 0xc3, 0xff, 0x4b, 0x67, 0xb1, 0xff, 0x4e, 0x7d, 0xa2, 0xff, 0x4f, 0x87, 0x98, 0xff, 0x4c, 0x75, 0xa7, 0xff, 0x54, 0x5f, 0xc4, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x49, 0x34, 0xde, 0xff, 0x49, 0x33, 0xde, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x45, 0x2e, 0xe0, 0xff, 0x19, 0x22, 0x74, 0xff, 0x19, 0x22, 0x76, 0xff, 0x45, 0x2e, 0xe2, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2d, 0xde, 0xff, 0x44, 0x2b, 0xdf, 0xff, 0x44, 0x2a, 0xe0, 0xff, 0x44, 0x2c, 0xdf, 0xff, 0x43, 0x2d, 0xdd, 0xff, 0x4a, 0x34, 0xde, 0xff, 0x53, 0x3f, 0xe0, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x3c, 0x2c, 0xca, 0xff, 0x3e, 0x2c, 0xce, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x46, 0x30, 0xdd, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x52, 0x3d, 0xdf, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x50, 0x3a, 0xdf, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x46, 0x30, 0xdd, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x72, 0x61, 0xe5, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x6e, 0x5a, 0xe6, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x40, 0x27, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x47, 0x32, 0xde, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x7a, 0x67, 0xe7, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x68, 0x53, 0xe4, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x3f, 0x27, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x40, 0x28, 0xdd, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x82, 0x74, 0xe8, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x75, 0x65, 0xe6, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x4b, 0x35, 0xde, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2d, 0xdd, 0xff, 0x7c, 0x6c, 0xe7, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x4c, 0x36, 0xdf, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x46, 0x30, 0xdd, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x43, 0x2d, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x47, 0x31, 0xdd, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x53, 0x3e, 0xe0, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x46, 0x2e, 0xde, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x56, 0x42, 0xe1, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x58, 0x43, 0xe1, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x46, 0x30, 0xdd, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x4a, 0x34, 0xde, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x48, 0x33, 0xde, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x6d, 0x5b, 0xe4, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x43, 0x2d, 0xdd, 0xff, 0x5c, 0x48, 0xe1, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x46, 0x2f, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x4b, 0x36, 0xde, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x62, 0x4e, 0xe3, 0xff, 0x44, 0x2d, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x43, 0x2c, 0xdd, 0xff, 0x57, 0x42, 0xe1, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x49, 0x33, 0xde, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x52, 0x3d, 0xdf, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x4a, 0x34, 0xde, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x4a, 0x34, 0xde, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x46, 0x30, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x44, 0x2e, 0xdd, 0xff, 0x46, 0x30, 0xde, 0xff, 0x6b, 0x59, 0xe3, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
    0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x52, 0x3d, 0xdf, 0xff, 0x3e, 0x26, 0xdc, 0xff, 0x40, 0x2a, 0xdd, 0xff, 0x4c, 0x36, 0xdf, 0xff, 0x66, 0x53, 0xe3, 0xff, 0x4b, 0x36, 0xde, 0xff, 0x4c, 0x36, 0xde, 0xff, 0x65, 0x53, 0xe3, 0xff, 0x4d, 0x38, 0xdf, 0xff, 0x40, 0x29, 0xdd, 0xff, 0x40, 0x29, 0xdd, 0xff, 0x57, 0x41, 0xe1, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,

#else
#error "apple_icon_chroma image :invalid color depth (check LV_COLOR_DEPTH in lv_conf.h)"
#endif
};


const lv_img_t apple_icon_chroma = {
    {
        .header.w = 30,           /*Image width in pixel count*/
        .header.h = 30,           /*Image height in pixel count*/
        .header.alpha_byte = 0,       /*No alpha byte*/
        .header.chroma_keyed = 1, /*LV_COLOR_TRANSP (lv_conf.h) pixels will be transparent*/
        .header.format = LV_IMG_FORMAT_INTERNAL_RAW,
    },
    {
        .pixel_map = apple_icon_chroma_pixel_map, /*Pointer the array of image pixels.*/
    }
};

#endif

