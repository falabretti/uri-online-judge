while(True):
    a, b = input().split(" ")
    a = int(a)
    b = int(b)

    if(a <= 0 or b <= 0):
        break

    if(a > b):
        aux = a
        a = b
        b = aux

    soma = 0

    for index in range(a, b+1):
        print(index, end=" ")
        soma = soma + index
    print("Sum={}".format(soma))
    