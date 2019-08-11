lista = []

for index in range(20):
    entrada = int(input())
    lista.append(entrada)

lista2 = []

pos = 19
for index in range(20):
    lista2.append(lista[pos])
    pos -= 1

for index in range(20):
    print("N[{}] = {}".format(index, lista2[index]))
    