while True:
    try:
    Valor1 = float(input("Change: "))
    if Valor1 >= 0:
         break
    except ValueError:
            pass
if Valor1 < 1:
    Valor1 = round(Valor1 * 100)
Count = 0
while Valor1 > 0:
    if Valor1 / 25 >= 0:
        Monedas = Valor1 / 25
        Count = Monedas
        Valor1 -= (25 * Monedas)
    elif Valor1 / 10 >= 0:
         Monedas = Valor1 / 10
         Count += Monedas
         Valor1 -= (10 * Monedas)
    elif Valor1 / 5 >= 0:
         Monedas = Valor1 / 5
         Count += Monedas
         Valor1 -= (5 * Monedas)
    elif Valor1 / 1 >= 0:
         Monedas = Valor1 / 1
         Count += Monedas
         Valor1 -= (1 * Monedas)
print(f"{round(Count)}")















