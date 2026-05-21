import csv

Resultado = list(map(int , input("Ingrese sus Numeros: ").split(" ")))
Resultado2 = sorted(Resultado , reverse = True)
print(Resultado2)


with open("Archivo.cvs" "r") as file:
    reader = csv.reader(file)



