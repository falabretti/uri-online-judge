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
        total = 0
        cont = 0

        while(True):
            opcao = int(input("novo calculo (1-sim 2-nao)\n"))

            if(opcao == 1 or opcao == 2):
                break

        if(opcao == 2):
            break
