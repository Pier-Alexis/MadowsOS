
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[32];
    int is_running;
    void (*start)();
    void (*stop)();
} Service;

Service services[10];
int num_services = 0;

void add_service(const char* name, void (*start)(), void (*stop)()) {
    if (num_services < 10) {
        strcpy(services[num_services].name, name);
        services[num_services].is_running = 0;
        services[num_services].start = start;
        services[num_services].stop = stop;
        num_services++;
        printf("Service %s added successfully.\n", name);
    } else {
        printf("Service list is full.\n");
    }
}

void start_service(const char* name) {
    for (int i = 0; i < num_services; i++) {
        if (strcmp(services[i].name, name) == 0) {
            if (!services[i].is_running) {
                services[i].start();
                services[i].is_running = 1;
                printf("Service %s started.\n", name);
            } else {
                printf("Service %s is already running.\n", name);
            }
            return;
        }
    }
    printf("Service %s not found.\n", name);
}

void stop_service(const char* name) {
    for (int i = 0; i < num_services; i++) {
        if (strcmp(services[i].name, name) == 0) {
            if (services[i].is_running) {
                services[i].stop();
                services[i].is_running = 0;
                printf("Service %s stopped.\n", name);
            } else {
                printf("Service %s is not running.\n", name);
            }
            return;
        }
    }
    printf("Service %s not found.\n", name);
}
