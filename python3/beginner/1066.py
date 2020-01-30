qnt_par = 0
qnt_impar = 0
qnt_pos = 0
qnt_neg = 0

for index in range(1, 6):
    entrada = int(input())
    if(entrada % 2 == 0):
        qnt_par = qnt_par + 1
    else:
        qnt_impar = qnt_impar + 1
    if(entrada > 0):
        qnt_pos = qnt_pos + 1
    elif(entrada < 0):
        qnt_neg = qnt_neg + 1

print("{} valor(es) par(es)".format(qnt_par))
print("{} valor(es) impar(es)".format(qnt_impar))
print("{} valor(es) positivo(s)".format(qnt_pos))
print("{} valor(es) negativo(s)".format(qnt_neg))
