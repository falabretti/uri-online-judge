testes = int(input())

for index in range(testes):
    dieta = input()
    cafe = input()
    almoco = input()

    cheater = False
    tam_dieta = len(dieta)
    tam_cafe = len(cafe)
    tam_almoco = len(almoco)

    for i in range(tam_cafe):
        pos = dieta.find(cafe[i])

        if(pos != -1):
            dieta = dieta.replace(cafe[i], "", 1)
        else:
            cheater = True
            break

    if(not cheater):
        for i in range(tam_almoco):
            pos = dieta.find(almoco[i])

            if(pos != -1):
                dieta = dieta.replace(almoco[i], "", 1)
            else:
                cheater = True
                break

    if(cheater):
        print("CHEATER")
    else:
        dieta = sorted(dieta)
        dieta = "".join(dieta)
        print(dieta)
        