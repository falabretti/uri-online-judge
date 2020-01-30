x = int(input())

while(True):
    z = int(input())

    if(z > x):
        break

soma = x
cont = 1

while(True):
    soma = soma + x + 1
    x = x + 1
    cont = cont + 1
    if(soma > z):
        break

print(cont)
