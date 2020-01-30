lista = []

for index in range(100):
    entrada = float(input())
    lista.append(entrada)

for index in range(100):
    if(lista[index] <= 10):
        print("A[{}] = {:.1f}".format(index, lista[index]))
