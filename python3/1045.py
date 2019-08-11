import math

a, b, c = input().split(" ")
a = float(a)
b = float(b)
c = float(c)
lista = []
lista.append(a)
lista.append(b)
lista.append(c)
lista.sort()
a = lista[2]
b = lista[1]
c = lista[0]

if(a >= b + c):
    print("NAO FORMA TRIANGULO")
else:
    if(math.pow(a, 2) == math.pow(b, 2) + math.pow(c, 2)):
        print("TRIANGULO RETANGULO")
    if(math.pow(a, 2) > math.pow(b, 2) + math.pow(c, 2)):
        print("TRIANGULO OBTUSANGULO")
    if(math.pow(a, 2) < math.pow(b, 2) + math.pow(c, 2)):
        print("TRIANGULO ACUTANGULO")
    if(a == b and b == c):
        print("TRIANGULO EQUILATERO")
    if(b == c and b != a or a == b and a != c or a == c and a != b):
        print("TRIANGULO ISOSCELES")
