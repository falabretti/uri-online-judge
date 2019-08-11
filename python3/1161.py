while(True):
    try:
        a, b = input().split(" ")
        a = int(a)
        b = int(b)

        if(a == 0):
            fat_a = 1
        else:
            fat_a = a
            for index in range(a - 1, 0, -1):
                fat_a *= index

        if(b == 0):
            fat_b = 1
        else:
            fat_b = b
            for index in range(b - 1, 0, -1):
                fat_b *= index

        print(fat_a + fat_b)
    except EOFError:
        break
        