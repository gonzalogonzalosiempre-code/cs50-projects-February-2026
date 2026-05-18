def main():
    Texto = input("Ingrese Su Texto ")
    if is_pangram(Texto) == True:
        print("Is pangram")
    else:
        print("Not is Pangram")

def is_pangram(st):
    Pangram = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
               'm', 'n', 'ñ', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
    count_Abc = 0
    for character in st:
        if character == Pangram[0:]:
            count_Abc += 1
    if count_Abc >= 27:
        return True
    else:
        return False
    return True

main()
