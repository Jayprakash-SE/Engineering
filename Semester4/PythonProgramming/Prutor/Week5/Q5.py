"""
Write a simple python program to take input from user calculate it's the length and print it in abbreviation form with a full stop after each character. For example, if the user inputs his name as abc then the output produced have to be a . b . c .


# The required output format is as-
Please input your name
your name is 3 characters long
a . b . c .

"""

name=input("Please input your name\n")
print("your name is", len(name), "characters long")
for i in range( len(name) ):
	print(name[i],".", end=" ")