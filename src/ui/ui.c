#include "gfx/gfx.h"
#include "ui.h"

void ui_init() {
    gfx_clear(0x000000);
}

void ui_draw_window() {
    gfx_rect(100, 80, 440, 320, 0x4444FF);
    gfx_rect(110, 90, 420, 300, 0x000000);
}

void ui_button(int x, int y, const char* text) {
    gfx_rect(x, y, 200, 40, 0x8888FF);
    gfx_text(x + 20, y + 12, text, 0xFFFFFF);
}

void ui_run() {
    ui_draw_window();
    ui_button(220, 160, "Demarrer");
    ui_button(220, 220, "Options");
    ui_button(220, 280, "Quitter");
}
