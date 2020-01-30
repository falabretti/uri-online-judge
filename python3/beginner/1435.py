while True:
    entrada = int(input())

    if(entrada == 0):
        break

    matriz = []

    for i in range(entrada):
        linha = [1 for j in range(entrada)]
        #lista = ["_" for letra in palavra]
        #for j in range(entrada):
        #    linha.append(1)
        matriz.append(linha)

    v = 1
    inicio = 0
    fim = entrada - 1
    for index in range(entrada):
        for i in range(inicio, fim + 1):
            for j in range(inicio, fim + 1):
                if(i == inicio or j == inicio or i == fim or j == fim):
                    matriz[i][j] = v
        v += 1
        inicio += 1
        fim -= 1

    for i in range(entrada):
        for j in range(entrada):
            print("{:3d}".format(matriz[i][j]), end="")
        print()
