op = input()

matriz = []

for i in range(12):
    linha = []
    for j in range(12):
        entrada = float(input())
        linha.append(entrada)
    matriz.append(linha)

soma = 0
cont = 0
for i in range(12):
    for j in range(12):
        if(i > j and i < 11 - j):
            soma += matriz[i][j]
            cont += 1

if(op == "S"):
    print("{:.1f}".format(soma))
if(op == "M"):
    print("{:.1f}".format(soma / cont))
