qnt_gremio = 0
qnt_inter = 0
empates = 0
total = 0

while(True):
    inter, gremio = input().split(" ")
    inter = int(inter)
    gremio = int(gremio)

    if(inter > gremio):
        qnt_inter = qnt_inter + 1
    elif(gremio > inter):
        qnt_gremio = qnt_gremio + 1
    else:
        empates = empates + 1

    total = total + 1

    opcao = int(input("Novo grenal (1-sim 2-nao)\n"))

    if(opcao == 1):
        continue
    elif(opcao == 2):
        print("{} grenais".format(total))
        print("Inter:{}".format(qnt_inter))
        print("Gremio:{}".format(qnt_gremio))
        print("Empates:{}".format(empates))
        if(qnt_inter > qnt_gremio):
            print("Inter venceu mais")
        elif(qnt_gremio > qnt_inter):
            print("Gremio venceu mais")
        else:
            print("Nao houve vencedor")
            
        break
