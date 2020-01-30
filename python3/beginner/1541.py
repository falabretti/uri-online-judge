import math

while True:
    entrada = [int(i) for i in input().split()]
    a = entrada[0]
    if(a == 0):
        break
    b = entrada[1]
    c = entrada[2]

    area = a * b
    area_real = math.pow(int(math.sqrt(area)), 2)
    terreno = (area * 100) / c
    saida = int(math.sqrt(terreno))

    print(saida)
