a, b, c = input().split(" ")
a = int(a)
b = int(b)
c = int(c)

lista = []

lista.append(a)
lista.append(b)
lista.append(c)

lista.sort()

for index in range(0,3):
    print(lista[index])
print()
print(a)
print(b)
print(c)
