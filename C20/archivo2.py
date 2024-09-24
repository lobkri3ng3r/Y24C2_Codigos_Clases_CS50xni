import cs50
import csv
from sys import exit, argv

def main():
    frase = cs50.get_string("frase: ")
    
    for caracter in frase:
        if caracter.capitalize:
            print("si")
        else:
            print("no")

def cuarto():
    # Abrir la secuencia de adn
    with open(argv[1],"r") as archivo1:
        secuencia = archivo1.readline()
    
    print(secuencia)

    # leer la base de datos (csv)
    subcadena = []
    dato = []
    
    with open(argv[2],"r") as archivo2:
        info =  csv.reader(archivo2)
        for i in info:
            dato.append(i)

    # print(dato)
    for i in dato[:1]:
        for j in range(len(i)):
            if not j == 0:
                subcadena.append(i[j])
    
    # calcular las cantidades de coincidencias
    cantidades = []
    for i in subcadena:
        cantidades.append(secuencia.count(i))

    print(subcadena)
    print(cantidades)
    print(dato)
    
    # comenzar a check 
        
    
def tereero():
    
    equipos = {}
    
    with open("equipos.csv","r") as file:
        
        cursor = csv.reader(file)
        next(cursor)
        for valor in cursor:
            equipos[valor[1]] = 0

    with open("equipos.csv","r") as file:  
            tmp = csv.reader(file)
            next(tmp)
            for valor in tmp:
                equipos[valor[1]] += 1

    print(equipos)


def secundario():
    #hay codigo
    # open() -- close() // with // modos de apertura: r,a,w,x,b
    with open("miArchivo.txt","a") as archivo:
        while True:
            mensaje = cs50.get_string("Mensaje: ")
            archivo.writelines(mensaje + "\n")
            m = cs50.get_string("continuar: 1.si || 2. nel: ")
            if(m != '2'):
                continue
            else:
                print("fin del programa")
                exit(0)
                                
    
    
if __name__ == "__main__":
    main()