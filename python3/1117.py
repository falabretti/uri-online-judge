total = 0
cont = 0

while(True):
    entrada = float(input())

    if(entrada >= 0 and entrada <= 10):
        total = total + entrada
        cont = cont + 1
    else:
        print("nota invalida")
        continue

    if(cont == 2):
        print("media = {:.2f}".format(total / 2))
        break
