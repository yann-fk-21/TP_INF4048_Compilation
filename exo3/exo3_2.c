#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define ETAT_INITIAL 0
#define ETAT_FINAL 1


void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Fonction de transition générique
int transition(char *motif, int *current_state, char input_letter) {
    input_letter = tolower(input_letter);  

    if (tolower(motif[*current_state]) == input_letter) {
        (*current_state)++;
    } else {
        *current_state = 0;
        if (tolower(motif[*current_state]) == input_letter) {
            (*current_state)++;
        }
    }

    if (motif[*current_state] == '\0') {
        *current_state = 0;
        return ETAT_FINAL;
    }

    return ETAT_INITIAL;
}

int occurrence(char *text, char *motif) {
    int current_state = 0;
    int number_of_occurrences = 0;
    int text_length = strlen(text);
    int motif_length = strlen(motif);

    for (int i = 0; i < text_length; i++) {
        int result = transition(motif, &current_state, text[i]);

        if (result == ETAT_FINAL) {
            number_of_occurrences++;
        }
    }

    return number_of_occurrences;
}

int main() {
    char motif[100];
    FILE *fichier;
    char *texte = NULL;
    long length;
    int occurrences;


    printf("Entrez le motif à rechercher : ");
    scanf("%s", motif);

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
    occurrences = occurrence(texte, motif);
    
    printf("Nombre d'occurrences de '%s' : %d\n", motif, occurrences+1);

    free(texte);

    return 0;
}
