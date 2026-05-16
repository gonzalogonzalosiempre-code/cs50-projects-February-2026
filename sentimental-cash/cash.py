try:
    Valor1 = float(input("Change: "))
except ValueError:
    while True:
        Valor1 = float(input("Change: "))
        if Valor1 >= 1:
            break
Monedas = 0
while Valor1 > 0:
    Valor1 = Valor1 - 25
    if Valor1 < 0:
        









