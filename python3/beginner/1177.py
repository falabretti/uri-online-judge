entrada = int(input())

lista = []
cont = 0

for index in range(1000):
    lista.append(cont)
    cont += 1

    if(cont == entrada):
        cont = 0

    print("N[{}] = {}".format(index, lista[index]))
