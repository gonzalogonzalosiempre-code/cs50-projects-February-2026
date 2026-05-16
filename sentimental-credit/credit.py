Tarjeta = str(input("Number: "))

if len(Tarjeta) == 15 and Tarjeta[14] == "4":
        print("INVALID")
elif len(Tarjeta) == 15 and Tarjeta[0] == "3":
     print("AMEX")
elif len(Tarjeta) == 16:
    if Tarjeta[0] == "5" and Tarjeta[15] != "3":
        print("MASTERCARD")
    elif Tarjeta[0] == "4" and Tarjeta[15] == "3" and len(Tarjeta) >= 13:
        print("INVALID")
    elif Tarjeta[0] == "4" and len(Tarjeta) >= 13:
        print("VISA")
else:
    print("INVALID")

