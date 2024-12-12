
#include <stdio.h>

void save_system_state() {
    FILE* file = fopen("system_state.sav", "w");
    fprintf(file, "MemoryUsage=512\nCPUUsage=25\nProcesses=3\n");
    fclose(file);
    printf("System state saved.\n");
}

void restore_system_state() {
    FILE* file = fopen("system_state.sav", "r");
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("Restored: %s", buffer);
    }
    fclose(file);
    printf("System state restored.\n");
}
