from sys import exit

while True:
    
    confirmar = input("continuar: si o no")
    
    if confirmar == "no" or confirmar == "No" or confirmar == "NO" or confirmar == "no":
        print("bye")
        exit(0) 