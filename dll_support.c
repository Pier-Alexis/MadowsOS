
#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[32];
    void* address;
} Symbol;

typedef struct {
    Symbol exports[100];
    int num_exports;
} DLL;

DLL loaded_dll;

void load_dll(const char* path) {
    printf("Loading DLL: %s\n", path);
    strcpy(loaded_dll.exports[0].name, "MessageBoxA");
    loaded_dll.exports[0].address = (void*)0x1000; // Simulated address
    loaded_dll.num_exports = 1;
}

void* get_symbol_address(const char* name) {
    for (int i = 0; i < loaded_dll.num_exports; i++) {
        if (strcmp(loaded_dll.exports[i].name, name) == 0) {
            return loaded_dll.exports[i].address;
        }
    }
    return NULL;
}
