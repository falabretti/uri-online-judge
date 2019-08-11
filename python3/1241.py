testes = int(input())

for index in range(testes):
    a, b = input().split()

    tam_a = len(a)
    tam_b = len(b)
    
    if(tam_b > tam_a):
        print("nao encaixa")
    elif(a == b):
        print("encaixa")
    else:
        for i in range(tam_b):
            encaixa = True
            dif = tam_a - tam_b

            if(a[dif + i] != b[i]):
                encaixa = False
                break

        if(encaixa):
            print("encaixa")
        else:
            print("nao encaixa")
    