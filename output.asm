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
mov eax, [A]
push eax
push dword fmt
call printf
add esp, 8
push dword [A]
push 2
;Teste d'infériorité ou égalité
mov eax, 4
cmp eax, 2
jg test1
push 1
jmp fintest1
test1:
push 0
fintest1:

;Réduction du alors1
pop eax
cmp eax, 1
jne sinon1
mov eax, [A]
push eax
push dword fmt
call printf
add esp, 8
jmp suite1
sinon1:
;Réduction du sinon1
mov eax, [B]
push eax
push dword fmt
call printf
add esp, 8
suite1:
;Réduction du fsis1
mov eax, 1
mov ebx, 0
int 0x80
