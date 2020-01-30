testes = int(input())

for caso in range(testes):
    entrada = int(input())

    soma = 0

    for index in range(1, entrada):
        if(entrada % index == 0):
            soma += index

    if(soma == entrada):
        print("{} eh perfeito".format(entrada))
    else:
        print("{} nao eh perfeito".format(entrada))
