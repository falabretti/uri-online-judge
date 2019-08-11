linha, total = input().split(" ")
linha = int(linha)
total = int(total)

for index in range(1, total + 1):
    if(index % linha == 0):
        print(index)
    elif(index == total):
        print(index)
    else:
        print(index, end=" ")
