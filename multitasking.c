
#include <stdint.h>

#define MAX_PROCESSES 10

typedef struct {
    uint32_t pid;
    uint32_t esp;          // Stack pointer
    uint32_t eip;          // Instruction pointer
    uint32_t active;
} Process;

Process process_table[MAX_PROCESSES];
int current_process = 0;

void schedule() {
    current_process = (current_process + 1) % MAX_PROCESSES;

    while (!process_table[current_process].active) {
        current_process = (current_process + 1) % MAX_PROCESSES;
    }

    switch_to_process(&process_table[current_process]);
}

void switch_to_process(Process* process) {
    asm volatile (
        "mov %0, %%esp\n\t"
        "jmp *%1\n\t"
        :
        : "r"(process->esp), "r"(process->eip)
    );
}
