Tarjeta = str(input("Number :"))

if len(Tarjeta) == 15:
    for n in str(Tarjeta):
        NumeroEntero = int(n)
    if NumeroEntero[0] == 3:
        print("AMEX")
elif len(Tarjeta) == 16:
    for e in str(Tarjeta):
        NumeroEntero = int(e)
    if NumeroEntero[0] == 5:
        print("MASTERCARD")
elif len(Tarjeta) == 16:
    for i in str(Tarjeta):
        NumeroEntero = int(i)
    if NumeroEntero[0] == 4:
        print("VISA")
else: print("INVALID")

