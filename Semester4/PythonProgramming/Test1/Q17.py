# Import regex module
import re

passwords = input("Enter the password to validate? ").split(',')

def validate( pw ):
    # Checking length
    if not ( ( len( pw ) >= 6 ) and ( len( pw ) <= 12 ) ):
        return False
    
    # Checking at least one lower aplhabet
    if not( re.search( r'[a-z]', pw ) ):
        return False

    # Checking at least one uppar aplhabet
    if not( re.search( r'[A-Z]', pw ) ):
        return False

    # Checking at least one digit
    if not( re.search( r'\d', pw ) ):
        return False

    # Checking at least one special
    if not( re.search( r'[$#@]', pw ) ):
        return False

    return True

for pw in passwords:
    if validate(pw):
        print(pw)