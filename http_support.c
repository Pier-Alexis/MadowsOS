
#include <stdio.h>

void http_get(const char* url) {
    printf("Connecting to %s...\n", url);
    printf("GET / HTTP/1.1\nHost: %s\n\n", url);
    printf("Response: 200 OK\nContent: <html>Welcome to MadowsOS</html>\n");
}
