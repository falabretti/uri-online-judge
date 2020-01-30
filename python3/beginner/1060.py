total = 0

for index in range(1, 7):
    entrada = float(input())
    if(entrada > 0):
        total = total + 1

print("{} valores positivos".format(total))
