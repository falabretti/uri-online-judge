linha = int(input())
op = input()

matriz = []

for i in range(12):
    linha_matriz = []
    for j in range(12):
        entrada = float(input())
        linha_matriz.append(entrada)
    matriz.append(linha_matriz)

soma = 0
for i in range(12):
    soma += matriz[linha][i]

if(op == "S"):
    print("{:.1f}".format(soma))
if(op == "M"):
    print("{:.1f}".format(soma / 12))
