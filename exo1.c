#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compte_occurrences(const char *fichier) {
    FILE *f;
    char line[256];  // Taille maximale d'une ligne, à adapter si nécessaire
    int count = 0;

    f = fopen(fichier, "r");
    if (f == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        return -1;  // Retourne -1 en cas d'erreur
    }

    while (fgets(line, sizeof(line), f)) {
        char *ptr = line;
        while ((ptr = strstr(ptr, "mur")) != NULL) {
            count++;
            ptr += strlen("mur");  // Avance le pointeur après la dernière occurrence trouvée
        }
    }

    fclose(f);
    return count;
}

int main() {
    const char *chemin_du_fichier = "text.txt";
    int nombre_occurrences = compte_occurrences(chemin_du_fichier);

    if (nombre_occurrences >= 0) {
        printf("Le nombre d'occurrences de 'mur' dans le fichier %s est : %d\n", chemin_du_fichier, nombre_occurrences);
    }

    return 0;
}
