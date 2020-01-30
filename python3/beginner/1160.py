teste = int(input())

for caso in range(1, teste+1):
    pa, pb, ca, cb = input().split(" ")
    pa = int(pa)
    pb = int(pb)
    ca = float(ca)
    cb = float(cb)

    anos = 0
    while(pa <= pb and anos <= 100):
        pa += int(pa * (ca / 100))
        pb += int(pb * (cb / 100))
        anos += 1

    if(anos > 100):
        print("Mais de 1 seculo.")
    else:
        print("{} anos.".format(anos))
