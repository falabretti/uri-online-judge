a, b, c = input().split(" ")

a = float(a)
b = float(b)
c = float(c)

pi = 3.14159

print("TRIANGULO: {:.3f}".format((a * c) / 2))
print("CIRCULO: {:.3f}".format(pi * (c ** 2)))
print("TRAPEZIO: {:.3f}".format(((a + b) * c) / 2))
print("QUADRADO: {:.3f}".format(b ** 2))
print("RETANGULO: {:.3f}".format(a * b))
