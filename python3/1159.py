while(True):
    x = int(input())

    if(x == 0):
        break

    cont = 1
    soma = 0

    index = x
    while(cont <= 5):
        if(index % 2 == 0):
            soma = soma + index
            cont = cont + 1
        index = index + 1

    print(soma)
