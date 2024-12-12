
#include <stdint.h>
#include <stdio.h>

typedef struct {
    uint8_t magic[2];        // "MZ"
    uint16_t last_page_size;
    uint16_t pages_in_file;
    uint16_t relocation_items;
    uint16_t header_size_in_paragraphs;
    uint16_t min_extra_paragraphs;
    uint16_t max_extra_paragraphs;
    uint16_t initial_ss;
    uint16_t initial_sp;
    uint16_t checksum;
    uint16_t initial_ip;
    uint16_t initial_cs;
    uint32_t pe_header_offset; // Offset to PE header
} DOSHeader;

void read_exe(const char* path) {
    FILE* file = fopen(path, "rb");
    if (!file) {
        printf("Error opening file\n");
        return;
    }

    DOSHeader dos_header;
    fread(&dos_header, sizeof(DOSHeader), 1, file);

    if (dos_header.magic[0] != 'M' || dos_header.magic[1] != 'Z') {
        printf("Not a valid EXE file\n");
        fclose(file);
        return;
    }

    printf("EXE file detected. PE header offset: %x\n", dos_header.pe_header_offset);
    fclose(file);
}
