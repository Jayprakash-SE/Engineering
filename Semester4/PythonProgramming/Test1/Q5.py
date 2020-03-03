from math import sqrt
nums = input("Enter the number spreated by comma? ")
result = []
for num in nums.split(','):
    result.append(int( sqrt((2 * 50 * int(num))/30)))
print(','.join(map(str, result)))