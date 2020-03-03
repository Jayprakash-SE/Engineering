d = []
w = []
while True:
    print("\n1. Enter the transaction")
    print("2. Display the net ammount")
    print("3. Exit")
    resp = int( input("Enter your choice? ") )

    if resp == 1:
        trans = input( "\nEnter transaction with D/W and value? ")
        if trans[0] == "D":
            d.append( int(trans[2:]) )
        elif trans[0] == "W":
            w.append( int(trans[2:]) )
    elif resp == 2:
        print("Net = ", sum(d) - sum(w) )
    else:
        exit()