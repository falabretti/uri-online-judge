entrada = int(input())

horas = entrada // 3600
entrada = entrada % 3600
minutos = entrada // 60
segundos = entrada % 60

print("{}:{}:{}".format(horas, minutos, segundos))
