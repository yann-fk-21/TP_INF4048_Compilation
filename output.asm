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
push dword [A]
push dword [B]
pop ebx
pop eax
cdq
idiv ebx
push edx
pop eax
mov [C], eax
mov eax, [C]
push eax
push dword fmt
call printf
add esp, 8
debutDoWhile1:
push dword [A]
push 1
pop ebx
pop eax
sub eax, ebx
push eax
pop eax
mov [A], eax
push dword [A]
push 10
;Teste de superiorité
pop ebx
pop eax
cmp eax, ebx

jge test1
push 0
jmp fintest1 
test1:
push 1
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
sinon1:
;Réduction du fsi1
push dword [A]
push 6
;Teste d'infériorité
pop ebx
pop eax
cmp eax, ebx

jge test2
push 1
jmp fintest2 
test2:
push 0
fintest2:


; Checking condition
pop eax
cmp eax,0
jne finDoWhile1
jmp debutDoWhile1
finDoWhile1:
mov eax, 1
mov ebx, 0
int 0x80
