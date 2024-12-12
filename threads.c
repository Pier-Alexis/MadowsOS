
#include <stdint.h>

#define MAX_THREADS 10

typedef struct {
    uint32_t tid;
    uint32_t esp;
    uint32_t eip;
    uint32_t active;
} Thread;

typedef struct {
    uint32_t pid;
    Thread threads[MAX_THREADS];
    uint32_t active_threads;
} Process;

void create_thread(Process* process, void (*entry)()) {
    for (int i = 0; i < MAX_THREADS; i++) {
        if (!process->threads[i].active) {
            process->threads[i].tid = i;
            process->threads[i].esp = allocate_stack(); // Allocate stack memory (to be implemented)
            process->threads[i].eip = (uint32_t)entry;
            process->threads[i].active = 1;
            process->active_threads++;
            return;
        }
    }
}
