while True:
    try:
        tam = int(input())

        lesmas = [int(i) for i in input().split()]
        
        maior = 1
        for i in range(tam):
            if(lesmas[i] > maior):
                maior = lesmas[i]

        nivel = 0
        if(maior < 10):
            nivel = 1
        elif(maior >= 10 and maior < 20):
            nivel = 2
        elif(maior >= 20):
            nivel = 3

        print(nivel)        

    except EOFError:
        break