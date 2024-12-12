
#include "framebuffer.h"

void draw_boot_menu() {
    framebuffer_clear(0x000000); // Black background

    draw_text("Select a module to load:", 10, 10, 0xFFFFFF); // White text
    draw_text("1. File System", 10, 40, 0xFFFFFF);
    draw_text("2. Networking", 10, 70, 0xFFFFFF);
}
