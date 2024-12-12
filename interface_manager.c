
#include <stdint.h>

typedef struct {
    int x, y;
    int width, height;
    uint32_t color;
    char* title;
    void (*on_click)(int x, int y); // Callback for click events
} Window;

#define MAX_WINDOWS 10
Window window_list[MAX_WINDOWS];
int num_windows = 0;

void add_window(Window win) {
    if (num_windows < MAX_WINDOWS) {
        window_list[num_windows++] = win;
    }
}

void handle_mouse_event(int x, int y) {
    for (int i = 0; i < num_windows; i++) {
        Window* win = &window_list[i];
        if (x >= win->x && x <= win->x + win->width &&
            y >= win->y && y <= win->y + win->height) {
            if (win->on_click) win->on_click(x, y);
        }
    }
}
