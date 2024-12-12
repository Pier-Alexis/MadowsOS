
#include <stdio.h>

void ping(const char* ip) {
    printf("Pinging %s...\n", ip);
    // Simulate sending an ICMP echo request
    printf("Reply from %s: bytes=32 time<1ms TTL=64\n", ip);
}
