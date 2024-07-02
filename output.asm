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

push 15
pop eax
mov [A], eax
push 6
pop eax
mov [B], eax
debutWhile1:
push dword [A]
push 6
;Teste de superiorité
pop ebx
pop eax
cmp eax, ebx

jg test1
push 0
jmp fintest1 
test1:
push 1
fintest1:


; Checking condition
pop eax
cmp eax,1
jne finWhile1
push dword [A]
push 1
pop ebx
pop eax
sub eax, ebx
push eax
pop eax
mov [A], eax
mov eax, [A]
push eax
push dword fmt
call printf
add esp, 8
jmp debutWhile1
finWhile1:
mov eax, 1
mov ebx, 0
int 0x80
