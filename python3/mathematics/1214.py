testes = int(input())

for i in range(testes):
    entrada = input().split()
    qnt = int(entrada.pop(0))
    notas = [int(i) for i in entrada]

    soma = 0
    for j in range(qnt):
        soma += notas[j]

    media = soma / qnt

    cont = 0
    for j in range(qnt):
        if(notas[j] > media):
            cont += 1

    saida = (cont * 100) / qnt

    print("{:.3f}%".format(saida))
    