lista = []

for index in range(10):
    entrada = int(input())

    if(entrada <= 0):
        entrada = 1

    lista.append(entrada)

for index in range(10):
    print("X[{}] = {}".format(index, lista[index]))
