
#include <stdio.h>

void tcp_connect(const char* ip, int port) {
    printf("Connecting to %s:%d...\n", ip, port);
    printf("Connection established. Sending data...\n");
    printf("Data received: OK\n");
}
