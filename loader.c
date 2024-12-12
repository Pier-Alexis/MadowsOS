
#include <stdint.h>
#include "framebuffer.h"

// Prototypes for initializing languages
void init_python();
void init_rust();
void init_c();

void loader_main() {
    framebuffer_clear(0xFFFFFF); // Clear screen to white
    framebuffer_draw_text("MadowsOS - Multilanguage Loader", 10, 10, 0x000000);

    framebuffer_draw_text("Initializing Python...", 10, 50, 0x0000FF);
    init_python();

    framebuffer_draw_text("Initializing Rust...", 10, 80, 0x0000FF);
    init_rust();

    framebuffer_draw_text("Initializing C/C++...", 10, 110, 0x0000FF);
    init_c();

    framebuffer_draw_text("All languages initialized successfully!", 10, 150, 0x00FF00);
}
