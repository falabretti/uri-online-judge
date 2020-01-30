entrada = int(input())

for index in range(0, entrada):
    teste = int(input())
    if(teste > 0):
        if(teste % 2 == 0):
            print("EVEN POSITIVE")
        else:
            print("ODD POSITIVE")
    elif(teste < 0):
        if(teste % 2 == 0):
            print("EVEN NEGATIVE")
        else:
            print("ODD NEGATIVE")
    else:
        print("NULL")
