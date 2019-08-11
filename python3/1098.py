i = 0.0
j = 1.0
cont = 0

while(True):    
    while(True):
        if(cont == 3):
            cont = 0
            break
        if(i == int(i)):
            i = int(i)
        if(j == int(j)):
            j = int(j)
        print("I={} J={}".format(i, j))
        i = float(i)
        j = float(j)
        cont = cont + 1
        j = j + 1
    i = round(i + 0.2, 1)
    j = round((j - 3) + 0.2, 1)
    if(i == 2.2):
        break
