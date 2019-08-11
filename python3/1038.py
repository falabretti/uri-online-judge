cd, qnt = input().split(" ")
cd = int(cd)
qnt = int(qnt)

if(cd == 1):
    valor = 4.0
if(cd == 2):
    valor = 4.5
if(cd == 3):
    valor = 5
if(cd == 4):
    valor = 2
if(cd == 5):
    valor = 1.5

print("Total: R$ {:.2f}".format(qnt * valor))
