#include <stdio.h>
#include "kernel.h"
#include "../userspace/shell.h"

// Kernel init
void kernel_init() {
    printf("[Kernel] Initialisation du kernel...\n");
    shell_init(); // démarre le shell
}

// Kernel tick (scheduler)
void kernel_tick() {
    printf("[Kernel] Tick du scheduler...\n");
    // TODO: gérer processus ici
}
