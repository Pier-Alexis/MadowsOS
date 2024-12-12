
#include "framebuffer.h"

void draw_file_manager() {
    framebuffer_clear(0xAAAAAA); // Grey background

    for (int i = 0; i < 10; i++) {
        if (current_dir->files[i].size > 0) {
            draw_text(current_dir->files[i].name, 10, 20 + i * 20, 0x000000); // Black text
        }
    }
}
