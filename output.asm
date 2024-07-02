section .data
A: dd 0
B: dd 0
C: dd 0
D: dd 0
fmt: db "%d", 10, 0
fmtlec: db "%d", 0
section .text
global _start
extern printf
extern scanf

_start:

push 4
pop eax
mov [A], eax
lea eax, [B]
push eax
push dword fmtlec
call scanf
add esp, 8
lea eax, [C]
push eax
push dword fmtlec
call scanf
add esp, 8
push dword [A]
push dword [B]
pop ebx
pop eax
add eax, ebx
push eax
pop eax
mov [A], eax
push dword [A]
push 2
mov eax, [A]
push eax
push dword fmt
call printf
add esp, 8
; if statement
pop eax
cmp eax, 0
je si_end0
mov eax, 1
si_end0:
mov eax, 1
mov ebx, 0
int 0x80
