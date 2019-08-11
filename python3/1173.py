entrada = int(input())

lista = []

for index in range(10):
    lista.append(entrada)
    entrada *= 2

for index in range(10):
    print("N[{}] = {}".format(index, lista[index]))
    