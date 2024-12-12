
#include "framebuffer.h"

void draw_resource_manager() {
    draw_rectangle(10, 10, 500, 300, 0x000000); // Black background
    draw_text("Resource Manager", 20, 20, 0xFFFFFF); // Title
    draw_text("CPU Usage: 25%", 20, 50, 0x00FF00);
    draw_text("Memory Usage: 512MB / 1024MB", 20, 80, 0x00FF00);
    draw_text("Active Processes: 3", 20, 110, 0x00FF00);
}
