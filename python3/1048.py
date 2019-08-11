salario = float(input())

if(salario <= 400):
    reajuste = 0.15
elif(salario > 400 and salario <= 800):
    reajuste = 0.12
elif(salario > 800 and salario <= 1200):
    reajuste = 0.10
elif(salario > 1200 and salario <= 2000):
    reajuste = 0.07
elif(salario > 2000):
    reajuste = 0.04

print("Novo salario: {:.2f}".format(salario + salario * reajuste))
print("Reajuste ganho: {:.2f}".format(salario * reajuste))
print("Em percentual: {:.0f} %".format(reajuste * 100))
