def lados_triangulo(a, b, c):
    h = max(a, b, c)
    c1 = min(a, b, c)
    if(a != b and b != c and a != c):
        if(a != max(a, b, c) and a != min(a, b, c)):
            c2 = a
        elif(b != max(a, b, c) and b != min(a, b, c)):
            c2 = b
        elif(c != max(a, b, c) and c != min(a, b, c)):
            c2 = c
    else:
        if(a == b):
            c1 = a
            c2 = b
        elif(a == c):
            c1 = a
            c2 = c
        elif(b == c):
            c1 = b
            c2 = c
    return h, c1, c2

a, b, c = input().split(" ")
a = float(a)
b = float(b)
c = float(c)

h, c1, c2 = lados_triangulo(a, b, c)

if(c1 + c2 > h):
    print("Perimetro = {:.1f}".format(a + b + c))
else:
    area = ((a + b) * c) / 2
    print("Area = {:.1f}".format(area))
