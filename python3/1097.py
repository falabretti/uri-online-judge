j = 7
for i in range(1, 10, 2):
    for j in range(j, j-3,-1):
        print("I={} J={}".format(i, j))
    j = j + 4