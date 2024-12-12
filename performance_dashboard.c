
#include "framebuffer.h"

void draw_performance_dashboard() {
    draw_rectangle(10, 10, 600, 400, 0x000000); // Black background
    draw_text("Performance Dashboard", 20, 20, 0xFFFFFF);
    draw_text("CPU: 35%", 20, 50, 0x00FF00);
    draw_text("Memory: 1.2GB / 4GB", 20, 80, 0x00FF00);
    draw_text("Network: 120KB/s", 20, 110, 0x00FF00);
}
