def main():
    TestBin = input("Ingrese sus numeros")
    binary_array_to_number(TestBin)


def binary_array_to_number(arr):
    if len(arr) < 4:
        print("Ingrese Denuevo Otro numero")
    else:
        Combinaciones = {
            "0": "0000",
            "1": "0001",
            "2": "0010",
            "3": "0011",
            "4": "0100",
            "5": "0101",
            "6": "0110",
            "7": "0111",
            "8": "1000",
            "9": "1001",
            "10": "1010"}

        i = 0
        for clave in Combinaciones:
            if arr == Combinaciones[0]:
                print(clave)
            else:
                i += 1
    return

main()
