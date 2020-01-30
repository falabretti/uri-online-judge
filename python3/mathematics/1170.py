testes = int(input())

for caso in range(testes):
    comida = float(input())

    dias = 0
    while(comida > 1):
        comida = comida / 2
        dias += 1

    print("{} dias".format(dias))
