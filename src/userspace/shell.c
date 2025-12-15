#include <stdio.h>
#include "shell.h"

// Initialisation du shell
void shell_init() {
    printf("[Shell] Démarrage du shell AloneOS...\n");
    shell_loop();
}

// Boucle principale du shell
void shell_loop() {
    char command[256];

    while(1) {
        printf("AloneOS> ");
        if (fgets(command, sizeof(command), stdin) != NULL) {
            if (command[0] == 'q') break; // Quitter
            printf("[Shell] Commande reçue: %s", command);
        }
    }

    printf("[Shell] Shell terminé.\n");
}
