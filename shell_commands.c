
#include <stdio.h>
#include <string.h>

void shell() {
    char command[64];
    while (1) {
        printf("MadowsOS> ");
        fgets(command, sizeof(command), stdin);

        if (strncmp(command, "ls", 2) == 0) {
            printf("Listing files...\n");
            // Logic for listing files
        } else if (strncmp(command, "cat", 3) == 0) {
            printf("Displaying file content...\n");
            // Logic for displaying files
        } else if (strncmp(command, "ping", 4) == 0) {
            char ip[16];
            sscanf(command, "ping %s", ip);
            ping(ip);
        } else {
            printf("Unknown command\n");
        }
    }
}
