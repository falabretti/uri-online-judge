a = int(input())
b = int(input())

if(a > b):
    aux = a
    a = b
    b = aux

soma = 0

if(a % 2 != 0):
    a = a + 1

for index in range(a, b):
    if(index % 2 != 0):
        soma = soma + index

print(soma)
