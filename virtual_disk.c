
uint8_t virtual_disk[1024 * 1024]; // 1 MB disk

void write_to_disk(uint32_t offset, uint8_t* data, uint32_t size) {
    if (offset + size < sizeof(virtual_disk)) {
        memcpy(&virtual_disk[offset], data, size);
    }
}

void read_from_disk(uint32_t offset, uint8_t* buffer, uint32_t size) {
    if (offset + size < sizeof(virtual_disk)) {
        memcpy(buffer, &virtual_disk[offset], size);
    }
}
