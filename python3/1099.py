testes = int(input())

for teste in range(1, testes+1):
    a, b = input().split(" ")
    a = int(a)
    b = int(b)

    if(a > b):
        incremento = -1
        if(a % 2 != 0):
            a = a - 1
    if(a <= b):
        incremento = +1
        if(a < b):
            if(a % 2 != 0):
                a = a + 1

    soma = 0
    
    for index in range(a, b, incremento):
        if(index % 2 != 0):
            soma = soma + index

    print(soma)
