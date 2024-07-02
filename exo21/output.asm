
section .data

section .text
    global _start

_start:

PUSH 22
PUSH 3
PUSH 2

POP rax
POP rbx
MUL rbx
PUSH rax
PUSH 5

POP rax
POP rbx
MUL rbx
PUSH rax

POP rax
POP rbx
ADD rax, rbx
PUSH rax

; Exit the program
    mov rax, 60   ; System call number for sys_exit
    xor rdi, rdi  ; Exit code 0
    syscall       ; Call the kernel
