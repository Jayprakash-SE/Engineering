sentence = input( "Enter the sentence? ")
letter, digit = 0,0
for i in sentence:
    if i.isdigit():
        digit = digit + 1
    elif i.isalpha():
        letter = letter + 1
print("Letter = ", letter )
print("Digit = ", digit)