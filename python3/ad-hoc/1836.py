import math

teste = int(input())

atr = {1: "HP", 2: "AT", 3: "DF", 4: "SP"}

for index in range(1, teste+1):
    nome, level = input().split(" ")
    level = int(level)

    print("Caso #{}: {} nivel {}".format(index, nome, level))

    for index in range(1, 5):
        bs, iv, ev = input().split(" ")
        bs = int(bs)
        iv = int(iv)
        ev = int(ev)

        if(index == 1):
            valor = (((iv + bs + math.sqrt(ev) / 8 + 50) * level) / 50) + 10
        else:
            valor = (((iv + bs + math.sqrt(ev) / 8) * level) / 50) + 5
        
        print("{}: {}".format(atr[index], math.trunc(valor)))
