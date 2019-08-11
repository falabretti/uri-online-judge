a = int(input())
b = int(input())

if(a > b):
    aux = a
    a = b
    b = aux

a = a + 1
total = 0

for index in range(a, b):
    if(index % 5 == 2 or index % 5 == 3):
        print(index)
