codigo_um, quantidade_um, valor_um = input().split(" ")
codigo_dois, quantidade_dois, valor_dois = input().split(" ")

total = float(valor_um) * float(quantidade_um) + float(valor_dois) * float(quantidade_dois)

print("VALOR A PAGAR: R$ {:.2f}".format(total))
