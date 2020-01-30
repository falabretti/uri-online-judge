entrada = int(input())

for index in range(1, entrada+1):
    if(index % 2 == 0):
        print('{}^2 = {}'.format(index, index ** 2))
