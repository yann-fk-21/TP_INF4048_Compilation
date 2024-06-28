#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define ETAT_INITIAL 0
#define ETAT_1 1
#define ETAT_2 2
#define ETAT_FINAL 3

void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int transition(int state, char input_letter) {
    input_letter = tolower(input_letter);  
      switch (state) {
        case ETAT_INITIAL:
            if (input_letter == 'm') {
                return ETAT_1;
            } else {
                return ETAT_INITIAL;
            }
        case ETAT_1:
            if (input_letter == 'u') {
                return ETAT_2;
            } else if (input_letter == 'm') {
                return ETAT_1;
            } else {
                return ETAT_INITIAL;
            }
        case ETAT_2:
            if (input_letter == 'r') {
                return ETAT_FINAL;
            } else if (input_letter == 'm') {
                return ETAT_1;
            } else if (input_letter == 'u') {
                return ETAT_2;
            } else {
                return ETAT_INITIAL;
            }
        case ETAT_FINAL:
            return ETAT_INITIAL;
        default:
            return ETAT_INITIAL;
    } 
}

int occurrence(char *text) {
    int current_state = ETAT_INITIAL;
    int number_of_occurrences = 0;
    int length = strlen(text);

    for (int i = 0; i < length; i++) {
        current_state = transition(current_state, text[i]);

        if (current_state == ETAT_FINAL) {
            number_of_occurrences++;
            current_state = ETAT_INITIAL; 
        }
    }

    return number_of_occurrences;
}


int main() {
    FILE *fichier;
    char *texte = NULL;
    long length;
    int occurrences;

    fichier = fopen("../lire.txt", "r");
    if (fichier == NULL) {
        perror("Error opening file");
        return 1;
    }

    fseek(fichier, 0, SEEK_END);
    length = ftell(fichier);
    fseek(fichier, 0, SEEK_SET);

    texte = (char *)malloc((length + 1) * sizeof(char)); 
    if (texte == NULL) {
        perror("Memory allocation error");
        fclose(fichier);
        return 1;
    }

    fread(texte, 1, length, fichier);
    texte[length] = '\0'; 
    fclose(fichier);

    to_lowercase(texte);
    occurrences = occurrence(texte);
    
    printf("Nombre d'occurrences de 'mur' : %d\n", occurrences+1);


    free(texte);

    return 0;
}
