par = []
impar = []

for index in range(15):
    entrada = int(input())

    if(entrada % 2 == 0):
        par.append(entrada)
    else:
        impar.append(entrada)

    if(len(par) == 5):
        for index in range(5):
            print("par[{}] = {}".format(index, par[index]))
        del par[:]
    if(len(impar) == 5):
        for index in range(5):
            print("impar[{}] = {}".format(index, impar[index]))
        del impar[:]

if(len(impar) > 0):
    tam = len(impar)
    for index in range(tam):
        print("impar[{}] = {}".format(index, impar[index]))
if(len(par) > 0):
    tam = len(par)
    for index in range(tam):
        print("par[{}] = {}".format(index, par[index]))
