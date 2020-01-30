while(True):
    entrada = int(input())

    if(entrada == 0):
        break

    for index in range(1, entrada + 1):
        if(index == entrada):
            print(index)
        else:
            print(index, end=" ")

