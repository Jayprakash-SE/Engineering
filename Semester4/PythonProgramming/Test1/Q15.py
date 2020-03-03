nums = input("Enter the numbers? ")
odd_list = []

for num in nums.split(','):
    if int(num)%2 != 0:
        odd_list.append(num)

print( ','.join(odd_list) )