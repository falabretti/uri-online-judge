entrada = int(input())

n1 = 0
n2 = 1

for index in range(1, entrada + 1):
    if(index == 1):
        print(n1, end=" ")
    elif(index == 2):
        print(n2, end=" ")
    elif(index == entrada):
        saida = n1 + n2
        print(saida)
        n1 = n2
        n2 = saida
    else:
        saida = n1 + n2
        print(saida, end=" ")
        n1 = n2
        n2 = saida
