
#include <stdio.h>
#include <string.h>

typedef struct {
    int pid;
    char name[32];
    int is_running;
} Process;

Process processes[10];
int num_processes = 0;

void add_process(const char* name) {
    if (num_processes < 10) {
        processes[num_processes].pid = num_processes + 1;
        strcpy(processes[num_processes].name, name);
        processes[num_processes].is_running = 1;
        num_processes++;
        printf("Process %s added.\n", name);
    }
}

void list_processes() {
    printf("Running processes:\n");
    for (int i = 0; i < num_processes; i++) {
        if (processes[i].is_running) {
            printf("PID: %d, Name: %s\n", processes[i].pid, processes[i].name);
        }
    }
}
