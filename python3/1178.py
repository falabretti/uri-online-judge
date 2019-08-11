entrada = float(input())

lista = []

for index in range(100):
    lista.append(entrada)
    print("N[{}] = {:.4f}".format(index, lista[index]))
    entrada /= 2
    