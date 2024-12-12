
#include <stdint.h>
#include <string.h>
#include <stdio.h>

void encrypt_file(const char* filepath, const char* key) {
    FILE* file = fopen(filepath, "rb+");
    if (!file) return;

    uint8_t buffer[256];
    size_t read;
    while ((read = fread(buffer, 1, sizeof(buffer), file)) > 0) {
        for (size_t i = 0; i < read; i++) {
            buffer[i] ^= key[i % strlen(key)];
        }
        fseek(file, -read, SEEK_CUR);
        fwrite(buffer, 1, read, file);
    }
    fclose(file);
}
