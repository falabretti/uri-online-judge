while True:
    try:
        v, t = input().split()
        v = int(v)
        t = int(t)

        v *= 2
        print(t * v)

    except EOFError:
        break