section .data
    hello db 'Hello, world!', 0x0a  ; la chaîne à afficher, avec un saut de ligne (0x0a) à la fin
    hello_len equ $ - hello          ; longueur de la chaîne

section .text
    global _start

_start:
    ; appel système pour écrire à la console
    mov eax, 4        ; numéro de l'appel système pour write
    mov ebx, 1        ; descripteur de fichier (1 pour stdout)
    mov ecx, hello    ; pointeur vers la chaîne
    mov edx, hello_len ; longueur de la chaîne
    int 0x80          ; interruption pour appeler le système

    ; sortie du programme
    mov eax, 1        ; numéro de l'appel système pour exit
    xor ebx, ebx      ; code de retour (0 pour aucun problème)
    int 0x80          ; interruption pour appeler le système



