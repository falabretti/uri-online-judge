qnt = 0

for index in range(1, 6):
    entrada = int(input())
    if(entrada % 2 == 0):
        qnt = qnt + 1

print("{} valores pares".format(qnt))
