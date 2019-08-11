maior = 0
pos = 0

for index in range(1, 101):
    entrada = int(input())
    if(entrada > maior):
        maior = entrada
        pos = index

print(maior)
print(pos)
