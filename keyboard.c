
#include "ports.h"

void keyboard_interrupt_handler() {
    uint8_t scancode = inb(0x60);
    // Handle scancode here (to be expanded for functionality)
}
