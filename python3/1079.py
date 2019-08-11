entrada = int(input())

for index in range(0, entrada):
    a, b, c = input().split(" ")
    a = float(a)
    b = float(b)
    c = float(c)
    
    media = (a * 2 + b * 3 + c * 5) / 10

    print("{:.1f}".format(media))
