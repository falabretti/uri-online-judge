entrada = int(input())
saida = 1

for linha in range(1, entrada + 1):
    print(saida, saida ** 2, saida ** 3)
    print(saida, saida ** 2 + 1, saida ** 3 + 1)
    saida = saida + 1
