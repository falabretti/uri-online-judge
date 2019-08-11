testes = int(input())

for index in range(testes):
    entrada = input()
    deslocamento = int(input())

    tam = len(entrada)
    saida = []

    for i in range(tam):
        pos = ord(entrada[i])
        pos -= deslocamento

        if(pos < 65):
            pos += 26

        saida.append(chr(pos))

    saida = "".join(saida)

    print(saida)
    