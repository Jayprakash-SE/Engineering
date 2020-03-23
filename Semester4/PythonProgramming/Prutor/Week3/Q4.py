"""
Problem Statement:-

Write a simple python program and declare a tuple initially having all vowels of the English alphabet in it and unpack its contents and store them in some variables as v1,v2,v3,v4,v5 and then assign the elements as v5,v4,v3,v2,v1 sequence.

# The required output is as:
The initial tuple is: ('a', 'e', 'i', 'o', 'u')
The updated tuple is: ('u', 'o', 'i', 'e', 'a')

"""
t = ('a','e','i','o','u')
print("The initial tuple is:", t )
v1, v2, v3, v4, v5 = t
t = v5, v4, v3, v2, v1
print("The updated tuple is:", t)