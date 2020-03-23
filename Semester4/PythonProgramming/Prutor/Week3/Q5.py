"""
Problem Statement:-

Please input the starting for your series
0.25
Please input the d for your series
0.75
The series produced by this method is
0.25, 1.0, 1.75, 2.5, 3.25, 4.0, 4.75, 5.5, 6.25, 7.0,

"""

C= 0
def generateNext(d,num):
    global C
    return C

C=float( input("Please input the starting for your series\n") )
s=float( input("Please input the d for your series\n") )
print ( "The series produced by this method is")
for i in range(1,11):
    print(generateNext(s,C), end=', ')
    C += s