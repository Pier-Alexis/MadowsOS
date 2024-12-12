
void draw_logs() {
    draw_rectangle(10, 10, 400, 300, 0x000000); // Black background
    draw_text("System Logs", 20, 20, 0xFFFFFF); // White text

    for (int i = 0; i < 10; i++) {
        draw_text("Log message", 20, 40 + i * 20, 0xFFFFFF);
    }
}
