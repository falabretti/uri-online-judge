while True:
    try:
        tam, testes = input().split()
        tam = int(tam)
        testes = int(tam)

        cifra1 = input().lower()
        cifra2 = input().lower()

        for index in range(testes):
            linha = input()
            
            for letra in linha:
                if(letra in cifra1 or letra in cifra2):
                    print("$", end="")
                else:
                    print(letra, end="")
            print()

    except EOFError:
        break