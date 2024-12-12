
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void extract_deb(const char* path) {
    FILE* file = fopen(path, "rb");
    if (!file) {
        printf("Error opening file\n");
        return;
    }

    char magic[4];
    fread(magic, sizeof(char), 4, file);
    if (strncmp(magic, "!<arch>", 7) != 0) {
        printf("Not a valid DEB file\n");
        fclose(file);
        return;
    }

    printf("DEB file detected. Extracting...\n");
    fclose(file);
}
