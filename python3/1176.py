testes = int(input())

fib = []
a = -1
b = 1

for index in range(61):
    c = a + b
    fib.append(c)
    a = b
    b = c

for index in range(testes):
    entrada = int(input())
    print("Fib({}) = {}".format(entrada, fib[entrada]))
