entrada = []
lista = input().split(" ")
a = int(lista[0])
tam = len(lista)
b = int(lista[tam-1])

soma = 0

for index in range(0, b):
    soma = soma + a
    soma = soma + index

print(soma)
