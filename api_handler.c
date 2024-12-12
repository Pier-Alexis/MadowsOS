
void api_handler(const char* endpoint, const char* method) {
    if (strcmp(endpoint, "/tasks") == 0 && strcmp(method, "GET") == 0) {
        execute_script("PHP", "/path/to/task_manager.php");
    } else if (strcmp(endpoint, "/graphql") == 0) {
        execute_script("PHP", "/path/to/graphql_api.php");
    }
}
