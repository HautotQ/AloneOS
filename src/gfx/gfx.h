#ifndef GFX_H
#define GFX_H

#include <stdint.h>

// Initialise l’affichage graphique
void gfx_init();

// Nettoie l’écran
void gfx_clear(uint32_t color);

// Dessine un pixel
void gfx_pixel(int x, int y, uint32_t color);

// Dessine un rectangle plein
void gfx_rect(int x, int y, int w, int h, uint32_t color);

// Affiche du texte (police bitmap)
void gfx_text(int x, int y, const char* text, uint32_t color);

#endif
