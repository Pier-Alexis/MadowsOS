
#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[32];
    uint8_t permissions;
} File;

File files[10];

void set_permissions(const char* filename, uint8_t permissions) {
    for (int i = 0; i < 10; i++) {
        if (strcmp(files[i].name, filename) == 0) {
            files[i].permissions = permissions;
            printf("Permissions for %s updated to %d.\n", filename, permissions);
            return;
        }
    }
    printf("File %s not found.\n", filename);
}

uint8_t check_permission(const char* filename, uint8_t permission) {
    for (int i = 0; i < 10; i++) {
        if (strcmp(files[i].name, filename) == 0) {
            return (files[i].permissions & permission) != 0;
        }
    }
    return 0;
}
