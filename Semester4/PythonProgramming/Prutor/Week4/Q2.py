"""
Problem Statement:-

Write a python program for an infinite while loop to get input from the user and print it and breaks upon 0 value pressed by the user.
"""

while True:
    val = input("please input your choices\n")
    print( val )
    if val == "0":
        print("0 is pressed the program is now terminating")
        break