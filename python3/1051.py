salario = float(input())

total_imposto = 0

if(salario <= 2000):
    print("Isento")
else:
    if(salario > 4500):
        imposto = salario - 4500
        total_imposto = total_imposto + imposto * 0.28
        salario = 4500
    if(salario > 3000 and salario <= 4500):
        imposto = salario - 3000
        total_imposto = total_imposto + imposto * 0.18
        salario = 3000
    if(salario > 2000 and salario <= 3000):
        imposto = salario - 2000
        total_imposto = total_imposto + imposto * 0.08

    print("R$ {:.2f}".format(total_imposto))
