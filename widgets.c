
#include "framebuffer.h"

void draw_button(int x, int y, int width, int height, const char* label, uint32_t color) {
    draw_rectangle(x, y, width, height, color);
    draw_text(label, x + 10, y + (height / 2) - 8, 0xFFFFFF); // White text
}
