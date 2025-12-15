#include <stdio.h>
#include "ui.h"

// Initialisation de l'UI
void ui_init() {
    printf("[UI] Interface utilisateur initialisée (console simple)\n");
}

// Affichage d'une fenêtre (placeholder)
void ui_draw_window(const char* title) {
    printf("[UI] Fenêtre: %s\n", title);
}
