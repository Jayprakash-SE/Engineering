from operator import itemgetter

num = int( input("How many records do you want to enter? ") )
result = []
for i in range(num):
    record = input().split(',')
    result.append( tuple(record) )

print( sorted(result, key=itemgetter(0,1,2)) )