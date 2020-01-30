while True:
    n = int(input())
    if(n == 0):
        break

    v = 1
    sobe = True
    for i in range(n):
        vl = v
        for j in range(n):
            print("{:3d}".format(vl), end="")
            if(j == n - 1):
                print()
            else:
                print(" ", end="")

            if(i == 0):                
                sobe = True
            elif(j == 0):
                sobe = False
            elif(vl == 1):
                sobe = True
            
            if(sobe):
                vl += 1
            else:
                vl -= 1
        v += 1
    print()
