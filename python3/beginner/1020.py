entrada = int(input())

print("{} ano(s)".format(entrada // 365))
entrada = entrada % 365
print("{} mes(es)".format(entrada // 30))
entrada = entrada % 30
print("{} dia(s)".format(entrada))
