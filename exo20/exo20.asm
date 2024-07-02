section .data

section .text
    global _start

_start:
    ; Push values onto the stack
    push 1
    push 4
    push 5
    
    ; Pop the first two values
    pop rax       ; rax = 5
    pop rbx       ; rbx = 4
    
    ; Multiply rax by rbx (rax = 5 * 4 = 20)
    mul rbx
    
    ; Pop the next value
    pop rbx       ; rbx = 1
    
    ; Add the result to rbx (rbx = rbx + rax)
    add rax, rbx  ; rax = 20 + 1 = 21
    

    ; Exit the program
    mov rax, 60   ; System call number for sys_exit
    xor rdi, rdi  ; Exit code 0
    syscall       ; Call the kernel
