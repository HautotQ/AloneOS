#include "gfx.h"

static uint32_t* framebuffer;
static int screen_w = 800;
static int screen_h = 600;

void gfx_init() {
    framebuffer = (uint32_t*)0xE0000000; // exemple (à adapter)
}

void gfx_clear(uint32_t color) {
    for (int i = 0; i < screen_w * screen_h; i++) {
        framebuffer[i] = color;
    }
}

void gfx_pixel(int x, int y, uint32_t color) {
    if (x < 0 || y < 0 || x >= screen_w || y >= screen_h) return;
    framebuffer[y * screen_w + x] = color;
}

void gfx_rect(int x, int y, int w, int h, uint32_t color) {
    for (int iy = 0; iy < h; iy++) {
        for (int ix = 0; ix < w; ix++) {
            gfx_pixel(x + ix, y + iy, color);
        }
    }
}
