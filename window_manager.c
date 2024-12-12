
#include "framebuffer.h"

typedef struct {
    int id;
    int x, y;
    int width, height;
    char title[32];
    int is_resizing;
    int is_dragging;
} Window;

Window windows[10];
int num_windows = 0;

void add_window(const char* title, int x, int y, int width, int height) {
    if (num_windows < 10) {
        Window* win = &windows[num_windows++];
        win->id = num_windows;
        win->x = x;
        win->y = y;
        win->width = width;
        win->height = height;
        strcpy(win->title, title);
        win->is_resizing = 0;
        win->is_dragging = 0;
        printf("Window '%s' added.\n", title);
    }
}

void draw_windows() {
    for (int i = 0; i < num_windows; i++) {
        Window* win = &windows[i];
        draw_rectangle(win->x, win->y, win->width, win->height, 0xCCCCCC);
        draw_text(win->title, win->x + 10, win->y + 5, 0x000000);
        draw_rectangle(win->x + win->width - 20, win->y + 5, 15, 15, 0xFF0000);
    }
}
