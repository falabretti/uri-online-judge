casos = int(input())

for index in range(1, casos+1):
    r = 1
    a, b = input().split(" ")
    a = int(a)
    b = int(b)

    if(a > b):
        while r != 0:
            r = a % b
            a = b
            b = r
        print(a)
    if(b > a):
        while r != 0:
            r = b % a
            b = a
            a = r
        print(b)
