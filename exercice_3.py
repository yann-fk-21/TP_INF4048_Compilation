# deterministic finite automaton for word 'mur'
"""
A = {a, b, c, d, .....}: Alpabet
Q = {1, 2, 3, 4}: ensemble finis d'état
i = 1 : etat initial
F = {4}: etat final
gamma = fonction de transition
gamma(1, m) = 2
gamma(2, u) = 3
gamma(3, r) = 4
"""

# fonction de transition
def gamma(state: int, input_letter: str):
    if(state == 1 and input_letter == "m"):
        return 2
    if(state == 2 and input_letter == "u"):
        return 3
    if(state == 3 and input_letter == "r"):
        return 4

# AFD
def AFD_mur (word: str):
    initial_state = 1
    final_state = 4
    current_state = initial_state

    for i in range(len(word)):
        current_state = gamma(current_state, word[i])
    
    if(current_state == final_state):
        return True
    else:
        return False

# fonction de calcul du nombre d'occurence
def occurrence(text: str):
    number_of_occurence = 0
    text = text.replace(", ", " ")
    split_text = text.split(" ")
    for word in split_text:
        word_is_recognized = AFD_mur(word.lower())
        if(word_is_recognized):
            number_of_occurence += 1
    
    return number_of_occurence

# text = "Le mur est un Mur, Mur graphique. Mur, murmur"
# print(ocurrence(text))

with open("./lire.txt", "r", encoding="utf-8") as fichier:
    text = fichier.read()
    print(occurrence(text))
