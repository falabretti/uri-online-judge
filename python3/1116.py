testes = int(input())

for index in range(1, testes+1):
    a, b = input().split(" ")
    a = float(a)
    b = float(b)

    if(b == 0):
        print("divisao impossivel")
    else:
        print("{:.1f}".format(a / b))
