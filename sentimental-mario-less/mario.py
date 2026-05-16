try:
    Height = int(input("Height: "))
except ValueError:
    Height = int(input("Ingrese Denuevo el Programa"))

if Height > 8 or Height <= 0:
    while Height > 8 or Height <= 0:
        Height = int(input("Height: "))

for i in range(Height):
    n = i + 1
    print(" " * (Height - n), end=(""))
    print("#" * (i+1), end=(" "))
    print("#" * (i+1))

