hora_inicio, min_inicio, hora_final, min_final = input().split(" ")
hora_inicio = int(hora_inicio)
min_inicio = int(min_inicio)
hora_final = int(hora_final)
min_final = int(min_final)

tempo_inicial = hora_inicio * 60 + min_inicio
tempo_final = hora_final * 60 + min_final

if(tempo_final > tempo_inicial):
    duracao = tempo_final - tempo_inicial
    print("O JOGO DUROU {:.0f} HORA(S) E {:.0f} MINUTO(S)".format(duracao // 60, duracao % 60))
elif(tempo_inicial > tempo_final):
    duracao = tempo_final + 1440 - tempo_inicial
    print("O JOGO DUROU {:.0f} HORA(S) E {:.0f} MINUTO(S)".format(duracao // 60, duracao % 60))
else:
    print("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)")
