
#include "framebuffer.h"

void draw_taskbar() {
    draw_rectangle(0, SCREEN_HEIGHT - 50, SCREEN_WIDTH, 50, 0x000000); // Black bar
    draw_text("Start", 10, SCREEN_HEIGHT - 40, 0xFFFFFF); // "Start" button
}
