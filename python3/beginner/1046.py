inicio, fim = input().split(" ")
inicio = int(inicio)
fim = int(fim)

if(fim > inicio):
    tempo = fim - inicio
elif(inicio > fim):
    tempo = fim + 24 - inicio
else:
    tempo = 24

print("O JOGO DUROU {} HORA(S)".format(tempo))
