a = int(input())
b = int(input())

if(a > b):
    aux = a
    a = b
    b = aux

soma = 0

for index in range(a, b + 1):
    if(index % 13 != 0):
        soma = soma + index

print(soma)
