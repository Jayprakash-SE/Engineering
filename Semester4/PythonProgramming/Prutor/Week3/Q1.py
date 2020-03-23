"""
Problem Statement:-

Write a python program to get input from the user using a while loop and print if it is an even number or not until 0 is not pressed.

# The required output is: 
please provide any input or 0 to terminate
15 is not an even it is the odd number
please provide any input or 0 to terminate
25 is not an even it is the odd number
please provide any input or 0 to terminate
20 is an even number
please provide any input or 0 to terminate
46 is an even number
please provide any input or 0 to terminate
10 is an even number
please provide any input or 0 to terminate
9602 is an even number
please provide any input or 0 to terminate
472 is an even number
please provide any input or 0 to terminate
"""

x = int(input("please provide any input or 0 to terminate\n"))
while x != 0:
    if x%2 ==0:
        print(x,"is an even number")
    else:
        print(x,"is not an even it is the odd number")

    x = int(input("please provide any input or 0 to terminate\n"))