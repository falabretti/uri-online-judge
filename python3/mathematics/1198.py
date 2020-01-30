while True:
    try:
        ex1, ex2 = input().split()
        ex1 = int(ex1)
        ex2 = int(ex2)

        dif = abs(ex1 - ex2)
        print(dif)
        
    except EOFError:
        break