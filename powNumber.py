def main():
    Numero = int(input("Ingrese su Numero "))
    NumPowList = square_digits(Numero)
    print(*NumPowList)

def square_digits(num):
    NumPowList = []
    for digit in str(num):
        PowDigit = pow(int(digit), 2)
        NumPowList.append(PowDigit)
    return NumPowList
main()
