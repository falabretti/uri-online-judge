alcool = 0
diesel = 0
gasolina = 0

while(True):
    entrada = int(input())

    if(entrada == 1):
        alcool = alcool + 1
    elif(entrada == 2):
        gasolina = gasolina + 1
    elif(entrada == 3):
        diesel = diesel + 1
    elif(entrada == 4):
        print("MUITO OBRIGADO")
        print("Alcool: {}".format(alcool))
        print("Gasolina: {}".format(gasolina))
        print("Diesel: {}".format(diesel))
        break
        