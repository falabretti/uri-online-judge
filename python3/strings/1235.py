testes = int(input())

for i in range(testes):
    entrada = input()

    tam = len(entrada)
    metade = tam // 2 - 1

    for j in range(metade, -1, -1):
        print(entrada[j], end="")

    for j in range(tam - 1, metade, -1):
        print(entrada[j], end="")

    print()
