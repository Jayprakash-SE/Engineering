sentence = input( "Enter the sentence? ")
upper, lower = 0,0
for i in sentence:
    if i.isupper():
        upper = upper + 1
    elif i.islower():
        lower = lower + 1
print("UPPER CASE ", upper )
print("LOWER CASE ", lower)