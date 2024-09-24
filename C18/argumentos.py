from sys import argv,exit

if len(argv) >= 5:
    print("Cantidad de argumentos valida")
else:
    print("Faltan argumentos")
    
candidatos = {}
    
for elementos in argv[1:]:
    # print(elementos)
    candidatos[elementos] = 0

print(candidatos)

while True:
    voto = input("Ingresa el nombre del candidato que vas a votar:")
    
    if voto in argv:
        print("Voto aceptado")
        candidatos[voto] += 1
    else:
        print("No existe ese candidato")
    
    
    respuesta = int(input("Continuar --> 1.si || 2.no"))
    if respuesta == 2:
        print(candidatos)
        print("Fin del programa")
        exit(0)