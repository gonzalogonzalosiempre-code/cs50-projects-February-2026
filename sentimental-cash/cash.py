try:
    Valor1 = float(input("Change: "))
except ValueError:
    while True:
        Valor1 = float(input("Change: "))
        if Valor1 >= 1:
            break
Monedas = 0
while Valor1 > 0:
    Valor1 -= 25
    if 25 > Valor1:
        Monedas += 1
        Valor1 -= 10
        if 10 > Valor1:
            Monedas += 1
            Valor1 -= 5
            if 5 > Valor1:
                Monedas += 1
                if 1 >= Valor1:
                    Monedas += 1













