a, b, c, d = input().split(" ")
a = float(a)
b = float(b)
c = float(c)
d = float(d)

media = (a * 2 + b * 3 + c * 4 + d * 1) / 10

print("Media: {:.1f}".format(media))
if(media >= 7):
    print("Aluno aprovado.")
elif (media < 5):
    print("Aluno reprovado.")
else:
    print("Aluno em exame.")
    exame = float(input())
    print("Nota do exame: {:.1f}".format(exame))
    media = (media + exame) / 2
    if(media >= 5):
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    print("Media final: {:.1f}".format(media))
