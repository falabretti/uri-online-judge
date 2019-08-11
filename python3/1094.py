testes = int(input())

total = 0
total_coelhos = 0
total_ratos = 0
total_sapos = 0

for index in range(1, testes+1):
    qnt, entrada = input().split(" ")
    qnt = int(qnt)

    if(entrada == "C"):
        total_coelhos = total_coelhos + qnt
    elif(entrada == "R"):
        total_ratos = total_ratos + qnt
    elif(entrada == "S"):
        total_sapos = total_sapos + qnt

    total = total + qnt

print("Total: {} cobaias".format(total))
print("Total de coelhos: {}".format(total_coelhos))
print("Total de ratos: {}".format(total_ratos))
print("Total de sapos: {}".format(total_sapos))
print("Percentual de coelhos: {:.2f} %".format(100 * total_coelhos / total))
print("Percentual de ratos: {:.2f} %".format(100 * total_ratos / total))
print("Percentual de sapos: {:.2f} %".format(100 * total_sapos / total))