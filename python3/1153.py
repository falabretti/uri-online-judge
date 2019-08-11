entrada = int(input())

fat = entrada

for index in range(entrada - 1, 0, -1):
    fat = fat * index

print(fat)
