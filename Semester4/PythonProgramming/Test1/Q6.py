num = input("Enter the X and Y? ")
X, Y = num.split(',')
result = []
for i in range(int(X)):
    result.append([])
    for j in range(int(Y)):
        result[i].append(i *j)
print(result)