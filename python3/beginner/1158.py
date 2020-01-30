teste = int(input())

for caso in range(1, teste+1):
    x, y = input().split(" ")
    x = int(x)
    y = int(y)

    soma = 0
    cont = 0

    index = x
    while(True):
        if(index % 2 != 0):
            soma = soma + index
            cont = cont + 1
        index = index + 1

        if(cont == y):
            break

    print(soma)
    soma = 0
    cont = 0
