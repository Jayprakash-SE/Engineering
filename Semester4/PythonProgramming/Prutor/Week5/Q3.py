"""
Write a simple python function to add two values inserted by the user with an option to skip or calculate the negative number.

# The required output is as:
Please input the first number
Please input the second number
The sum of 5 and 12 is: 17
The sum of 5 and 12 is: 17


# The required output is as:
Please input the first number
Please input the second number
The sum of -8 and 42 is: A negative value found without count negative value allowed! -- skipping calculation
The sum of -8 and 42 is: 34

"""

def calc_sum(a,b,countnegative=False):
	if ( countnegative == True):
		return a + b
	else:
		if ( a > 0) and (b> 0):
			return a+b
		else:
			return "A negative value found without count negative value allowed! -- skipping calculation"

a=int(input("Please input the first number\n"))
b=int(input("Please input the second number\n"))

print ( "The sum of", a,"and", b ,"is:", calc_sum(a,b,countnegative=False) ) # Printing Outpput without allowing countnegative number 
print ( "The sum of", a,"and", b ,"is:", calc_sum(a,b,countnegative=True) ) # Printing Outpput with allowing countnegative number 