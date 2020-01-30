entrada = int(input())

i = 0

while True:
    if(entrada % 2 != 0):
        print(entrada)
        i = i + 1
    entrada = entrada + 1
    if(i == 6):
        break
