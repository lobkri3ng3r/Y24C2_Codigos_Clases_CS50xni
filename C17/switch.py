n = int(input("Ingrese numero: "))

match n:
    case 1:
        print("Operacion suma")
    case 2:
        print("Operacion resta")
    case 3:
        print("Operacion mult")
    case 4:
        print("Operacion division")

    case _:
        print("Ninguno")
