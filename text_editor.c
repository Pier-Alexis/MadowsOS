
#include "framebuffer.h"

void draw_text_editor() {
    draw_rectangle(10, 10, 600, 400, 0xFFFFFF); // White background
    draw_text("Text Editor", 20, 20, 0x000000);
    draw_text("Enter text here...", 20, 50, 0x000000);
}
