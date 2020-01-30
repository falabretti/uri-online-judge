testes = int(input())

for index in range(testes):
    p1, p2 = input().split()

    maior = len(p1)
    if(len(p2) > maior):
        maior = len(p2)

    for i in range(maior):
        if(i < len(p1)):
            print(p1[i], end="")
        if(i < len(p2)):
            print(p2[i], end="")
    print()    
