
#include <stdint.h>

#define IDT_SIZE 256

typedef struct {
    uint16_t offset_low;
    uint16_t selector;
    uint8_t zero;
    uint8_t type_attr;
    uint16_t offset_high;
} __attribute__((packed)) IDTEntry;

IDTEntry idt[IDT_SIZE];

void set_idt_entry(int index, uint32_t handler, uint16_t selector, uint8_t type_attr) {
    idt[index].offset_low = handler & 0xFFFF;
    idt[index].selector = selector;
    idt[index].zero = 0;
    idt[index].type_attr = type_attr;
    idt[index].offset_high = (handler >> 16) & 0xFFFF;
}

extern void load_idt(void* base, uint16_t size);

void init_idt() {
    extern void isr_keyboard();
    set_idt_entry(0x21, (uint32_t)isr_keyboard, 0x08, 0x8E);

    load_idt(&idt, sizeof(idt) - 1);
}
