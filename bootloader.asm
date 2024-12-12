
[BITS 32]
[ORG 0x100000]

section .multiboot
align 4
dd 0x1BADB002              ; Multiboot Magic Number
dd 0x00                    ; Flags
dd -(0x1BADB002 + 0x00)    ; Checksum

section .text
global start
start:
    mov esp, 0x90000       ; Set stack pointer
    call loader_main       ; Call the loader
    cli                    ; Disable interrupts
    hlt                    ; Halt the CPU
