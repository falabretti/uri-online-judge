tam = int(input())
entrada = input().split()
entrada = [int(i) for i in entrada]

menor = entrada[0]
pos = 0

for index in range(tam):
    if(entrada[index] < menor):
        menor = entrada[index]
        pos = index

print("Menor valor: {}".format(menor))
print("Posicao: {}".format(pos))
