entrada = int(input())
soma_in = 0
soma_out = 0

for index in range(0, entrada):
    teste = int(input())
    if(teste >= 10 and teste <= 20):
        soma_in = soma_in + 1
    else:
        soma_out = soma_out + 1

print("{} in".format(soma_in))
print("{} out".format(soma_out))
