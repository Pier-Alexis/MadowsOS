
#include <stdint.h>
#include <string.h>

typedef struct {
    char name[32];
    uint32_t size;
    uint32_t data_block;
} FileEntry;

#define MAX_FILES 100
FileEntry file_table[MAX_FILES];

#define BLOCK_SIZE 512
char data_blocks[MAX_FILES][BLOCK_SIZE];

void create_file(const char* name, const char* content) {
    for (int i = 0; i < MAX_FILES; i++) {
        if (file_table[i].size == 0) { // Empty entry
            strncpy(file_table[i].name, name, 32);
            file_table[i].size = strlen(content);
            strcpy(data_blocks[i], content);
            file_table[i].data_block = i;
            return;
        }
    }
}

const char* read_file(const char* name) {
    for (int i = 0; i < MAX_FILES; i++) {
        if (strcmp(file_table[i].name, name) == 0) {
            return data_blocks[file_table[i].data_block];
        }
    }
    return NULL;
}
