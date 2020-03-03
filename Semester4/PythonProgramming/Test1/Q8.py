lines = input("How many lines, do you want to write? ")
resultList = []
for i in range(int(lines)):
    resultList.append( input().upper() )
print('\n'.join(resultList))