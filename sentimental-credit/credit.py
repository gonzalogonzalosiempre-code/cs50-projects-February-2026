Tarjeta = str(input("Number: "))

if len(Tarjeta) == 15:
    if Tarjeta[0] == "3":
        print("AMEX")
elif len(Tarjeta) == 16:
    if Tarjeta[0] == "5":
        print("MASTERCARD")
    elif Tarjeta[0] == "4" and len(Tarjeta) >= 13:
        print("VISA")
    else: print("INVALID")
elif len(Tarjeta) == :
   print("INVALID")

