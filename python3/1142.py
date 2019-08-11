entrada = int(input())
saida = 1

for linha in range(1, entrada + 1):
    for index in range(1, 4):
        print(saida, end=" ")
        saida = saida + 1
    print("PUM")
    saida = saida + 1
