while True:
    try:
        frase = input().split()
        qnt = len(frase)
        
        soma = 0
        cont = 0

        for i in range(qnt):

            word = True
            tam = len(frase[i])

            for j in range(tam):
                if(frase[i][j].isalpha() or frase[i][j] == "."):
                    if(frase[i][j].isalpha()):
                        continue
                    else:
                        if(j != tam - 1 or tam == 1):
                            word = False
                            break
                else:
                    word = False
                    break
            
            if(word):
                if(frase[i][tam - 1] == "."):
                    tam -= 1
                soma += tam
                cont += 1

        if(cont != 0):
            media = soma // cont
            if(media <= 3):
                pontos = 250
            elif(media == 4 or media == 5):
                pontos = 500
            elif(media >= 6):
                pontos = 1000
        else:
            pontos = 250        

        print(pontos)  


    except EOFError:
        break