num = int( input("Enter the number? ") )
result = {}

for i in range(1,num+1):
    result.update({ i: i*i})

print(result)