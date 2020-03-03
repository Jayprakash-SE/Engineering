digit = int( input("Enter the digit? ") )
sum = 0

# a + aa + aaa + aaaa --> 4 time
for i in range(1, 4+1):
    sum = sum + int( i*str(digit) )

print( sum )