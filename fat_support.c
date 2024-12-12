
#include <stdint.h>
#include <stdio.h>

typedef struct {
    char filename[8];
    char extension[3];
    uint8_t attributes;
    uint16_t starting_cluster;
    uint32_t file_size;
} DirectoryEntry;

void read_fat16_directory() {
    DirectoryEntry entries[16];
    printf("Fichiers dans la partition :\n");
    for (int i = 0; i < 16; i++) {
        if (entries[i].filename[0] != 0) {
            printf("%s.%s (%d bytes)\n", entries[i].filename, entries[i].extension, entries[i].file_size);
        }
    }
}
