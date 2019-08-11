soma = 0
qnt = 0

for index in range(1, 7):
    entrada = float(input())
    if(entrada > 0):
        soma = soma + entrada
        qnt = qnt + 1

print("{} valores positivos".format(qnt))
print("{:.1f}".format(soma / qnt))
