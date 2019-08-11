nota = int(input())

print(nota)
print("{} nota(s) de R$ 100,00".format(nota // 100))
nota = nota % 100
print("{} nota(s) de R$ 50,00".format(nota // 50))
nota = nota % 50
print("{} nota(s) de R$ 20,00".format(nota // 20))
nota = nota % 20
print("{} nota(s) de R$ 10,00".format(nota // 10))
nota = nota % 10
print("{} nota(s) de R$ 5,00".format(nota // 5))
nota = nota % 5
print("{} nota(s) de R$ 2,00".format(nota // 2))
nota = nota % 2
print("{} nota(s) de R$ 1,00".format(nota))
