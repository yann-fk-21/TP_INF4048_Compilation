import re

# fonction occurence du mot mur
# def occcurence_mur(text: str):
#     number_of_ocurrence = 0
#     text = text.replace(", ", " ")
#     split_text = text.split(" ")
    
#     for word in split_text:
#         if(word.lower() == "mur"):
#             number_of_ocurrence +=1
    
#     return number_of_ocurrence

def occurrence_mur(texte):
    # Motif à rechercher (mot exact)
    motif = rf'\bmur\b'
    
    # Trouver toutes les occurrences du motif dans le texte
    occurrences = re.findall(motif, texte, re.IGNORECASE)
    
    # Retourner le nombre d'occurrences trouvées
    return len(occurrences)



with open("./lire.txt", "r", encoding="utf-8") as fichier:
    text = fichier.read()
    print(occurrence_mur(text))


