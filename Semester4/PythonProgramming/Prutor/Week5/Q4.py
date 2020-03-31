"""
Write a simple python function to increase the value of any number by a constant "C=5" and write another simple function to update the value of "C" to any other value like 6,7,8, etc.

# The required output is as:
The incremented number is:
15
The incremented number is:
110

"""
C=5
def incrementbyC(num):
    global C
    C+=num

def updateC(a):
    global C
    C = a

print ( "The incremented number is:")
incrementbyC(10)
print(C)

print ("The incremented number is:")
updateC(100)
incrementbyC(10)
print(C)