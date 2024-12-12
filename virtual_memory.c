
#define PAGE_SIZE 4096
#define NUM_PAGES 1024

uint8_t page_table[NUM_PAGES];

void* allocate_page() {
    for (int i = 0; i < NUM_PAGES; i++) {
        if (!page_table[i]) {
            page_table[i] = 1; // Mark as allocated
            return (void*)(i * PAGE_SIZE);
        }
    }
    return NULL; // No free pages
}

void free_page(void* page) {
    int index = (uint32_t)page / PAGE_SIZE;
    if (index >= 0 && index < NUM_PAGES) {
        page_table[index] = 0; // Mark as free
    }
}
