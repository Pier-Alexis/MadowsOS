
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>

void start_http_server() {
    int server_fd = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in address = {0};
    address.sin_family = AF_INET;
    address.sin_port = htons(8080);
    address.sin_addr.s_addr = INADDR_ANY;

    bind(server_fd, (struct sockaddr*)&address, sizeof(address));
    listen(server_fd, 5);

    printf("HTTP Server running on http://localhost:8080\n");

    while (1) {
        int client_fd = accept(server_fd, NULL, NULL);
        char response[] =
            "HTTP/1.1 200 OK\n"
            "Content-Type: text/html\n\n"
            "<h1>Welcome to MadowsOS HTTP Server</h1>";
        write(client_fd, response, strlen(response));
        close(client_fd);
    }
}
