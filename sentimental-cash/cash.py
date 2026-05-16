try:
    Valor1 = float(input("Change: "))
except ValueError:
    while True:
        Valor1 = float(input("Change: "))
        if Valor1 >= 1:
            break
Monedas = 0
Valor = Valor1
while Valor > 0:
    if Valor - 25 <= 0:
        break
    else:
        Valor = Valor - 25
        Monedas += 1




