soma = 0
total = 0

while(True):
    entrada = int(input())

    if(entrada < 0):
        break

    soma = soma + entrada
    total = total + 1

print("{:.2f}".format(soma / total))
