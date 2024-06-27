# fonction généraliste d'occurence
# def occurence(text: str):
#     number_of_ocurrence = 0
#     text = text.replace(", ", " ")
#     split_text = text.split(" ")
#     user_word = input("Entrer le mot: ")
    
#     for word in split_text:
#         if(word.lower() == user_word.lower()):
#             number_of_ocurrence +=1
    
#     return number_of_ocurrence

import re

def occurrence(texte):
    user_word = input("Entrez un mot: ")

    # Motif à rechercher (mot exact)
    motif = rf'\b{re.escape(user_word)}\b'
    
    # Trouver toutes les occurrences du motif dans le texte
    occurrences = re.findall(motif, texte, re.IGNORECASE)
    
    # Retourner le nombre d'occurrences trouvées
    return len(occurrences)



with open("./lire.txt", "r", encoding="utf-8") as fichier:
    text = fichier.read()
    print(occurrence(text))


