section .data
    hello db 'Hello, Holberton!', 0
    fmt db '%s\n', 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    ; prepare arguments for printf
    mov rdi, fmt
    mov rsi, hello
    xor rax, rax

    ; call printf
    call printf

    ; restore stack and return
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
