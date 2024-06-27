# Définition des constantes d'état
ETAT_INITIAL = 'etat_initial'
ETAT_1 = 'etat_1'
ETAT_2 = 'etat_2'
ETAT_FINAL = 'etat_final'

#Fonction de transition
def transition_etat(etat_actuel, caractere):
    caractere = caractere.lower()  # Convertir le caractère en minuscule
    if etat_actuel == ETAT_INITIAL:
        if caractere == 'm':
            return ETAT_1
        else:
            return ETAT_INITIAL
    elif etat_actuel == ETAT_1:
        if caractere == 'u':
            return ETAT_2
        elif caractere == 'm':
            return ETAT_1
        else:
            return ETAT_INITIAL
    elif etat_actuel == ETAT_2:
        if caractere == 'r':
            return ETAT_FINAL
        elif caractere == 'm':
            return ETAT_1
        elif caractere == 'u':
            return ETAT_2
        else:
            return ETAT_INITIAL
    elif etat_actuel == ETAT_FINAL:
        return ETAT_INITIAL
    else:
        return ETAT_INITIAL

def compte_occurrences(fichier):
    nbOc = 0
    etat_actuel = ETAT_INITIAL

    with open(fichier, 'r') as fdw:
        while True:
            car = fdw.read(1)
            if not car:
                break

            etat_actuel = transition_etat(etat_actuel, car)

            if etat_actuel == ETAT_FINAL:
                nbOc += 1
                etat_actuel = ETAT_INITIAL

    return nbOc

# Exemple d'utilisation
chemin_du_fichier = 'text.txt'

nombre_occurrences = compte_occurrences(chemin_du_fichier)

print(f"Le nombre d'occurrences de 'mur' dans le fichier {chemin_du_fichier} est : {nombre_occurrences}")
