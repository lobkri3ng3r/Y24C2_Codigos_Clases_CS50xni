import csv

def main():
    with open("archivo.csv", "w") as archivo:
        escritor = csv.writer(archivo)
        escritor.writerow(["Nombres", "Apellidos", "Nota"])
        dato1 = input("Ingrese nombre: ")
        dato2 = input("Ingrese apellido: ")
        dato3 = input("Ingrese edad: ")
        escritor.writerow([dato1, dato2, dato3])
        
main()