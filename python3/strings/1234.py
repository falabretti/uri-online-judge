while True:
    try:
        entrada = input()
        
        upper = True
        tam = len(entrada)
        saida = []

        for i in range(tam):
            if(entrada[i].isalpha()):
                if(upper):
                    saida += entrada[i].upper()
                    upper = False
                else:
                    saida += entrada[i].lower()
                    upper = True
            else:
                saida += entrada[i]

        for i in range(tam):
            print(saida[i], end="")
        print()

    except EOFError:
        break