#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}


int occurrence_mur(char *texte) {
    int count = 0;
    char motif[] = "mur";
    char *ptr;

    
    to_lowercase(texte);
    to_lowercase(motif);

    
    ptr = texte;
    while ((ptr = strstr(ptr, motif)) != NULL) {
        count++;
        ptr += 1; 
    }

    return count;
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

    texte = (char *) malloc((length + 1) * sizeof(char));  
    if (texte == NULL) {
        perror("Memory allocation error");
        fclose(fichier);
        return 1;
    }

    fread(texte, 1, length, fichier);
    texte[length] = '\0';  
    fclose(fichier);

    occurrences = occurrence_mur(texte);
    printf("Nombre d'occurrences de 'mur' : %d\n", occurrences +1);

    free(texte);

    return 0;
}
