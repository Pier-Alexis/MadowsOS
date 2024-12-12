
#include "ports.h"

int mouse_x = 400, mouse_y = 300;

void mouse_interrupt_handler() {
    uint8_t status = inb(0x64);
    if (status & 0x01) {
        uint8_t data = inb(0x60);
        mouse_x += (data & 0x10) ? -(data & 0x0F) : (data & 0x0F);
        mouse_y -= (data & 0x20) ? -(data & 0x0F) : (data & 0x0F);
        draw_cursor(mouse_x, mouse_y);
    }
}
