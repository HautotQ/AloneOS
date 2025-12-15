#include "kernel/kernel.h"
#include "ui/ui.h"
#include "platform/macos_platform.h"

int main() {
    platform_init();
    ui_init();
    ui_run();
    kernel_init();

    // Boucle principale simulée
    for (int i = 0; i < 3; i++) {
        kernel_tick();
    }

    return 0;
}
