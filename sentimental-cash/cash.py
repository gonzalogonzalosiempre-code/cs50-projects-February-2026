try:
    Valor1 = int(input("Change: "))
except ValueError:
    while True:
        Valor1 = int(input("Change: "))
        if Valor1 >= 1:
            break
Count = 0
while Valor1 > 0:
    if Valor1 / 25 <= 0:
        Monedas = Valor1 / 25
        Count = Monedas
        Valor1 -= (25 * Monedas)
    elif:
        print(f"{Count}")
        break
    elif Valor1 / 10 <= 0:
        Monedas = Valor1 / 10
        Count += Monedas
        Valor1 -= (10 * Monedas)
    elif Valor1 / 5 <= 0:
        Monedas = Valor1 / 5
        Count += Monedas
        Valor1 -= (5 * Monedas)
    elif Valor1 / 1 <= 0:
        Monedas = Valor1 / 1
        Count += Monedas
        Valor1 -= (1 * Monedas)















