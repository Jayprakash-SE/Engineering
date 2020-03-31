"""
Write a simple python function to generate a series of floating-point numbers by declaring and updating the global values of the variable and use it to produce the desired range of floating-point numbers by taking input from the user.

# The required output is as:
Please input the starting for your series
Please input the d for your series
The series produced by this method is
0.25, 1.0, 1.75, 2.5, 3.25, 4.0, 4.75, 5.5, 6.25, 7.0,
"""

C=0
def generateNext(d,num):
    global C
    return C

C=float(input("Please input the starting for your series\n"))
s=float(input("Please input the d for your series\n"))
print ("The series produced by this method is")
for i in range(1,11):
	print(generateNext(s,C), end=", ")
	C += s