"""
Problem Statement:-

Write a python program print the table in of 1 to 10 using while loop.
"""

i,j=1,1
print ( "Table start" )
while i<=10 and j<=10:
	print( i, "x", j, "=", i*j )
	if j == 10:
		j=1
		i=i+1
		continue
	j = j + 1

print ("End of table")