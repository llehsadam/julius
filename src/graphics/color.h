#ifndef GRAPHICS_COLOR_H
#define GRAPHICS_COLOR_H

#include <stdint.h>

typedef uint32_t color_t;

#define COLOR_BLACK 0x000000
#define COLOR_BLUE 0x0055ff
#define COLOR_RED 0xff0000
#define COLOR_ORANGE 0xff5a08
#define COLOR_ORANGE_LIGHT 0xffa500
#define COLOR_YELLOW 0xe7e75a
#define COLOR_WHITE 0xffffff
#define COLOR_LIGHT_GRAY 0xc6c6c6
#define COLOR_TRANSPARENT 0xf700ff
#define COLOR_INSET_LIGHT 0xffffff
#define COLOR_INSET_DARK 0x848484
#define COLOR_MINIMAP_DARK 0x424242
#define COLOR_MINIMAP_LIGHT 0xc6c6c6
#define COLOR_SIDEBAR 0xbdb592
#define COLOR_NO_MASK 0xffffff
#define COLOR_MASK_RED 0xff0818 // bit lost 0xf863
#define COLOR_MASK_GREEN 0x18ff18
#define COLOR_TOOLTIP 0x424242
#define COLOR_SOLDIER 0xf70000
#define COLOR_ENEMY_CENTRAL 0x7b0000
#define COLOR_ENEMY_NORTHERN 0x1800ff
#define COLOR_ENEMY_DESERT 0x08007b

#endif // GRAPHICS_COLOR_H
