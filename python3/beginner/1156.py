soma = 0
divisor = 1

for numerador in range(1, 40, 2):
    soma = soma + numerador / divisor
    divisor = divisor * 2

print("{:.2f}".format(soma))
