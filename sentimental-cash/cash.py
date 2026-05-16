try:
    Valor1 = float(input("Change: "))
except ValueError:
    while True:
        Valor1 = float(input("Change: "))
        if Valor1 >= 1:
            break
Monedas = 0
while Valor1 > 0:
    if Valor1 - 25 <= 0:
        break
    else:
        Valor1 = Valor - 25
        Monedas += 1




