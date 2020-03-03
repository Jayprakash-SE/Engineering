for i in range(1000, 3000+1):
    flag = 0
    for j in str(i):
        if int(j)%2 != 0:
            flag = 1
    if flag == 0:
        print(i)