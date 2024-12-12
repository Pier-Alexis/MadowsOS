
#include <stdint.h>

typedef struct {
    int pid;
    int priority; // 0 (high) to 5 (low)
    uint32_t esp;
    uint32_t eip;
    int is_running;
} Process;

Process process_table[10];
int current_process = 0;

void schedule() {
    int highest_priority = 5;
    int next_process = current_process;

    for (int i = 0; i < 10; i++) {
        if (process_table[i].is_running && process_table[i].priority < highest_priority) {
            highest_priority = process_table[i].priority;
            next_process = i;
        }
    }

    if (next_process != current_process) {
        switch_to_process(&process_table[next_process]);
        current_process = next_process;
    }
}

void switch_to_process(Process* process) {
    asm volatile (
        "mov %0, %%esp\n\t"
        "jmp *%1\n\t"
        :
        : "r"(process->esp), "r"(process->eip)
    );
}
