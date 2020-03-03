nums = input("Enter the binary numbers spreated by comma? ")
for num in nums.split(','):
    if len(num) < 4:
        print("Number is not a 4 digit. Skiping.....")
        continue
    
    if int(num,2)%5 == 0:
        print(num)