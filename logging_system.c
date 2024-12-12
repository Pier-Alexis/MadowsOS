
#include <stdio.h>
#include <time.h>

void log_event(const char* event) {
    FILE* log_file = fopen("system.log", "a");
    if (log_file) {
        time_t now = time(NULL);
        fprintf(log_file, "[%s] %s\n", ctime(&now), event);
        fclose(log_file);
    }
}
