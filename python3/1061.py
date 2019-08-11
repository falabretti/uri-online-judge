lixo, dia_inicio = input().split(" ")
h_inicio, lixo, m_inicio, lixo, s_inicio = input().split(" ")
lixo, dia_fim = input().split(" ")
h_fim, lixo, m_fim, lixo, s_fim = input().split(" ")
dia_inicio = int(dia_inicio)
h_inicio = int(h_inicio)
m_inicio = int(m_inicio)
s_inicio = int(s_inicio)
dia_fim = int(dia_fim)
h_fim = int(h_fim)
m_fim = int(m_fim)
s_fim = int(s_fim)

tempo_inicio = dia_inicio * 24 * 60 * 60 + h_inicio * 60 * 60 + m_inicio * 60 + s_inicio
tempo_fim = dia_fim * 24 * 60 * 60 + h_fim * 60 * 60 + m_fim * 60 + s_fim

duracao = tempo_fim - tempo_inicio

print("{} dia(s)".format(duracao // (60 * 60 * 24)))
duracao = duracao % (60 * 60 * 24)
print("{} hora(s)".format(duracao // (60 * 60)))
duracao = duracao % (60 * 60)
print("{} minuto(s)".format(duracao // 60))
duracao = duracao % 60
print("{} segundo(s)".format(duracao))
