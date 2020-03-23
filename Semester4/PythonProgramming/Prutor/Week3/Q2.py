"""
Problem Statement:-

Write a python program to check for the minimum of two numbers taking input from the user.

# The required output is:
Please input the value of the first number
Please input the value of the second number
The minimum number is the first number and its value is: 12
"""

x=int( input("Please input the value of the first number\n") )
y=int( input("Please input the value of the second number\n") )

if x > y:
    print("The minimum number is the first number and its value is:",y)
else:
    print("The minimum number is the first number and its value is:",x)