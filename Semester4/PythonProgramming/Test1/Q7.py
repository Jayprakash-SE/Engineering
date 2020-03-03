words = input("Enter the line? ")
result = []
for word in words.split(','):
    result.append( word )
print( ','.join( sorted( result) ) )