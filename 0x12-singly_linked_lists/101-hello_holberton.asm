SECTION .data
    msg db "Hello, Holberton", 0
    fmt db "%s", 10, 0

SECTION .text
    extern printf
    global main

main:
    sub rsp, 8  ; Adjust stack pointer for alignment
    mov esi, msg
    mov edi, fmt
    xor eax, eax  ; Use XOR for zeroing the register
    call printf

    xor eax, eax  ; Use XOR for zeroing the register
    add rsp, 8  ; Restore stack pointer
    ret
