
#include <stdint.h>
#include <string.h>
#include <stdio.h>

typedef struct Directory {
    char name[32];
    struct Directory* parent;
    struct Directory* subdirs[10];
    FileEntry files[10];
} Directory;

Directory root = { "root", NULL, { NULL }, { { "", 0, 0 } } };
Directory* current_dir = &root;

void change_directory(const char* name) {
    for (int i = 0; i < 10; i++) {
        if (current_dir->subdirs[i] && strcmp(current_dir->subdirs[i]->name, name) == 0) {
            current_dir = current_dir->subdirs[i];
            return;
        }
    }
    printf("Directory not found\n");
}
