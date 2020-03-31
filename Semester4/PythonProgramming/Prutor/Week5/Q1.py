"""
Write a simple python function to print even numbers between 1 to 10 have an option to increase/decrease the range of the calculation. 

#Required output is as:

The series is: 2, 4, 6, 8, 10,

The series is: 0, 2, 4, 6, 8, 10,

The series is: 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100,

The series is: 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100,
"""

def print_even(s=1,e=10):
	for i in range(s,e+1):
		if i%2 == 0:
			print(i, end=", ")
		
print ("The series is:")
print_even()
print ("\nThe series is:")
print_even(0)
print ("\nThe series is:")
print_even(10,100)
print ("\nThe series is:")
print_even(e=100)