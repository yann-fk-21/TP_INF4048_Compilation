#include <stdio.h>

// Fonction qui reconnaît la regex ^if.*n$
int reconnaiss_if_n(const char *ligne) {
    int etat = 0;
    const char *c = ligne;

    while (*c != '\0') {
        switch (etat) {
            case 0:
                if (*c == 'i') {
                    etat = 1;
                } else {
                    return 0; // Échec
                }
                break;
            case 1:
                if (*c == 'f') {
                    etat = 2;
                } else {
                    return 0; // Échec
                }
                break;
            case 2:
                // Accepte n'importe quel caractère jusqu'à la fin de la ligne
                etat = 3;
                break;
            case 3:
                // Accepte 'n' seulement à la fin de la ligne
                if (*c == 'n' && *(c + 1) == '\0') {
                    return 1; // Succès
                }
                break;
        }
        c++;
    }

    return 0; // Échec si on n'a pas atteint l'état final correctement
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <fichier>\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        return 1;
    }

    char ligne[1024];
    int lignes_reconnues = 0;

    // Lire ligne par ligne
    while (fgets(ligne, sizeof(ligne), fp) != NULL) {
        // Utiliser la fonction reconnaiss_if_n pour vérifier chaque ligne
        if (reconnaiss_if_n(ligne)) {
            lignes_reconnues++;
            printf("Ligne reconnue : %s", ligne);
        }
    }

    fclose(fp);

    printf("Nombre total de lignes reconnues : %d\n", lignes_reconnues);

    return 0;
}
