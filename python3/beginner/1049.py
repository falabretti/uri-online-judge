entrada = input()

if(entrada == "vertebrado"):
    entrada = input()
    if(entrada == "ave"):
        entrada = input()
        if(entrada == "carnivoro"):
            print("aguia")
        if(entrada == "onivoro"):
            print("pomba")
    if(entrada == "mamifero"):
        entrada = input()
        if(entrada == "onivoro"):
            print("homem")
        if(entrada == "herbivoro"):
            print("vaca")
if(entrada == "invertebrado"):
    entrada = input()
    if(entrada == "inseto"):
        entrada = input()
        if(entrada == "hematofago"):
            print("pulga")
        if(entrada == "herbivoro"):
            print("lagarta")
    if(entrada == "anelideo"):
        entrada = input()
        if(entrada == "hematofago"):
            print("sanguessuga")
        if(entrada == "onivoro"):
            print("minhoca")
