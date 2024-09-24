from sys import argv, exit

if len(argv) >= 5:
    print("HAY 5 ARGUMENTOS")
else:
    print("No hay muchos argumentos")
    exit(1)

candidatos = []

for i in argv[1:]:
    candidatos.append(i)

print(candidatos)

votaciones = {}

for c in candidatos:
    votaciones[c] = 0

print(votaciones)

valor = input("Por quien deseas votar: ")

if valor in candidatos:
    votaciones[valor] += 1
    print(votaciones)
    exit(0)
else:
    print("Ese candidato no existe")
    exit(1)

