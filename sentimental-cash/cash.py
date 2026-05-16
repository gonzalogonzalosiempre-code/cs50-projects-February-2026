try:
    Valor1 = float(input("Change: "))
except ValueError:
    while True:
        Valor1 = float(input("Change: "))
        if Valor1 >= 1:
            break
Suma25 = 0
Suma10 = 0
Suma5 = 0
Suma1 = 0
while Valor1 < 0:
    Suma = Valor1 - 25
    if (25 * 2) > Suma:


