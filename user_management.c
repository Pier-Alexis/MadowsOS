
#include <stdio.h>
#include <string.h>

typedef struct {
    char username[32];
    char password[32];
    int permissions; // 1 = admin, 0 = user
} User;

User users[10] = { { "admin", "password", 1 }, { "guest", "guest", 0 } };
User* current_user = NULL;

void login(const char* username, const char* password) {
    for (int i = 0; i < 10; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            current_user = &users[i];
            printf("Welcome %s!\n", current_user->username);
            return;
        }
    }
    printf("Login failed\n");
}
