
#include "framebuffer.h"

void draw_language_selector() {
    draw_rectangle(10, 10, 400, 300, 0x333333); // Dark grey background
    draw_text("Choose a language to execute code:", 20, 20, 0xFFFFFF);
    draw_text("1. Python", 20, 50, 0xFFFFFF);
    draw_text("2. Ruby", 20, 80, 0xFFFFFF);
    draw_text("3. PHP", 20, 110, 0xFFFFFF);
    draw_text("4. JavaScript", 20, 140, 0xFFFFFF);
    draw_text("5. Rust", 20, 170, 0xFFFFFF);
}
