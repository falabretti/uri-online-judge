entrada = int(input())

for index in range(entrada):
    print("Ho", end="")

    if(index == entrada - 1):
        print("!")
    else:
        print(" ", end="")
