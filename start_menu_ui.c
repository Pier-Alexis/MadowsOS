
#include "framebuffer.h"

void draw_start_menu() {
    draw_rectangle(0, SCREEN_HEIGHT - 300, 200, 250, 0xCCCCCC); // Grey menu
    draw_text("Applications", 10, SCREEN_HEIGHT - 280, 0x000000);
    draw_text("- File Manager", 10, SCREEN_HEIGHT - 260, 0x000000);
    draw_text("- Terminal", 10, SCREEN_HEIGHT - 240, 0x000000);
}
