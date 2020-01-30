entrada = float(input())

nota = int(entrada)
moeda = int((entrada - nota) * 100)

print("NOTAS:")
print("{} nota(s) de R$ 100.00".format(nota // 100))
nota = nota % 100
print("{} nota(s) de R$ 50.00".format(nota // 50))
nota = nota % 50
print("{} nota(s) de R$ 20.00".format(nota // 20))
nota = nota % 20
print("{} nota(s) de R$ 10.00".format(nota // 10))
nota = nota % 10
print("{} nota(s) de R$ 5.00".format(nota // 5))
nota = nota % 5
print("{} nota(s) de R$ 2.00".format(nota // 2))
nota = nota % 2

print("MOEDAS:")
print("{} moeda(s) de R$ 1.00".format(nota))
moeda = moeda % 100
print("{} moeda(s) de R$ 0.50".format(moeda // 50))
moeda = moeda % 50
print("{} moeda(s) de R$ 0.25".format(moeda // 25))
moeda = moeda % 25
print("{} moeda(s) de R$ 0.10".format(moeda // 10))
moeda %= 10
print("{} moeda(s) de R$ 0.05".format(moeda // 5))
moeda %= 5
print("{} moeda(s) de R$ 0.01".format(moeda))
