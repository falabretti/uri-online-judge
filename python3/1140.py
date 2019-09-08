while(True):
    linha = input()
    if(linha == '*'):
        break
    palavras = [p for p in linha.split()]

    tautograma = True
    base = palavras[0][0].lower()

    for palavra in palavras:
        if(palavra[0].lower() != base):
            tautograma = False

    if(tautograma):
        print('Y')
    else:
        print('N')
    