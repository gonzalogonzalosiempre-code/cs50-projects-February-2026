try:
    Valor1 = float(input("Change: "))
except ValueError:
    while True:
        Valor1 = float(input("Change: "))
        if Valor1 >= 1:
            break
Monedas = 0
while True:
    if Valor1 / 25 <= 0:
        Monedas = Valor1 / 25
    else:
        break
    if Valor1 / 10 <= 0:
    













