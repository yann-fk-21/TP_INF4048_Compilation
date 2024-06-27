def compte_occurrences(fichier):
    count = 0
    with open(fichier, 'r') as f:
        for line in f:
            count += line.lower().count('mur')
    return count


chemin_du_fichier = r'text.txt'

nombre_occurrences = compte_occurrences(chemin_du_fichier)

print(f"Le nombre d'occurrences de 'mur' dans le fichier {chemin_du_fichier} est : {nombre_occurrences}")



