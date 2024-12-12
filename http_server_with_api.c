
#include <stdio.h>
#include <string.h>

void handle_http_request(const char* request) {
    if (strstr(request, ".php")) {
        execute_script("PHP", request);  // Exécuter un script PHP
    } else if (strstr(request, "/api/rest")) {
        execute_script("PHP", "/path/to/rest_api.php");
    } else if (strstr(request, "/api/graphql")) {
        execute_script("PHP", "/path/to/graphql_api.php");
    } else {
        printf("Unhandled request: %s\n", request);
    }
}
