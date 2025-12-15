#include <stdio.h>
#include <string.h>
#include "ui.h"

// Initialisation de l'UI
void ui_init() {
    printf("[UI] Interface utilisateur initialisée (console simple)\n");
}

// Affichage d'une fenêtre
void ui_draw_window(const char* title) {
    printf("\n+----------------------------+\n");
    printf("| %s\n", title);
    printf("+----------------------------+\n");
}

// Affichage d'un bouton simulé
void ui_button(const char* label) {
    printf("[Bouton] %s\n", label);
}

// Interaction simple
void ui_run() {
    char choix[10];
    ui_draw_window("Menu Principal");
    ui_button("1. Démarrer");
    ui_button("2. Options");
    ui_button("3. Quitter");

    printf("\nVotre choix: ");
    fgets(choix, sizeof(choix), stdin);

    if (strncmp(choix, "1", 1) == 0) {
        printf("Démarrage du programme...\n");
    } else if (strncmp(choix, "2", 1) == 0) {
        printf("Ouverture des options...\n");
    } else {
        printf("Fermeture de l'UI.\n");
    }
}
