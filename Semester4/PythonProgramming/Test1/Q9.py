words = input("Enter the words? ")
result = set()
for word in words.split(' '):
    result.add(word)

print( ' '.join( sorted( list(result) ) ) )