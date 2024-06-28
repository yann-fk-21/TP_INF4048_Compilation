#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Fonction pour compter les occurrences d'un mot dans un texte
int occurrence(char *texte, char *user_word) {
    int count = 0;
    char *ptr;
    char *motif;
    int motif_len;

    to_lowercase(texte);
    to_lowercase(user_word);

    motif_len = strlen(user_word);
    motif = (char *)malloc((motif_len + 3) * sizeof(char)); 
    if (motif == NULL) {
        perror("Memory allocation error");
        return -1;
    }

    snprintf(motif, motif_len + 3, " %s ", user_word);

    ptr = texte;
    while ((ptr = strstr(ptr, user_word)) != NULL) {
       /*if ((ptr == texte || !isalnum(*(ptr - 1))) && !isalnum(*(ptr + motif_len))) {
            count++;
        }*/
        count++;
        ptr += 1; 
    }

    free(motif);
    return count;
}

int main() {
    FILE *fichier;
    char *texte = NULL;
    long length;
    int occurrences;
    char user_word[100];

    printf("Entrez un mot: ");
    scanf("%s", user_word);

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

    occurrences = occurrence(texte, user_word);
    if (occurrences >= 0) {
        printf("Nombre d'occurrences de '%s' : %d\n", user_word, occurrences +1 );
    }

    free(texte);

    return 0;
}
