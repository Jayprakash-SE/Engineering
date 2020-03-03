nums = input("Enter the number spreated by comma? ")
resultList = []
for num in nums.split(','):
    resultList.append(int(num))

print(resultList)
print(tuple(resultList))