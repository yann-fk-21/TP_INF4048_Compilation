import sys

def compte_occurrences(fichier, mot_recherche):
    count = 0
    with open(fichier, 'r') as f:
        for line in f:
            count += line.lower().count(mot_recherche.lower())  # Utilisation de lower() pour ignorer la casse
    return count

if __name__ == "__main__":
    # Vérification du nombre d'arguments passés en ligne de commande
    if len(sys.argv) != 3:
        print("\n Run de cette maniere: python script.py <chemin_du_fichier> <mot_recherche>\n")
        sys.exit(1)
    
    chemin_du_fichier = sys.argv[1]
    mot_recherche = sys.argv[2]

    nombre_occurrences = compte_occurrences(chemin_du_fichier, mot_recherche)


    print(f"Le nombre d'occurrences de '{mot_recherche}' dans le fichier '{chemin_du_fichier}' est : {nombre_occurrences}")
    # Pour exécuter ce programme, il faut respecter cette syntaxe : python script.py <chemin_du_fichier> <mot_recherche>
    # exemple python exo2.py 'text.txt' MUR