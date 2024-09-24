#librerias
import cs50 # esto indica que voy a ocupar todo de la libreria
from cs50 import get_string  # usar el from nos usar funciones de manera mas especifica


def main():
    
    # estructuras de datos / son elementos iterables|| recorridos haciendo uso de un ciclo
    listas = ["mike",20,5.36] # esto es una lista / mutables
    tupla = () # esto es una tupla  / inmutables
    sets ={1,1,2} # esto es un set / mutables
    diccionarios = {"clave" : "valor"} #esto es un diccionario / mutable
    
    random = ["perro","gato",[1,2,3,4,5],["rojo","verde",[0,0,0,0]]]
    
    persona = {
        "nombre" : "",
        "edad" : 0,
        "colores" : []
    }
    
    datos = []
    
    cantidad = cs50.get_int("Cuantas personas desea agregar: ")
    
    for n in range(cantidad):
        
        nombre = get_string("Ingresa un nombre: ")
        persona["nombre"] = nombre
        edad = cs50.get_int("Ingresa la edad: ")
        persona["edad"] = edad
        
        cantidadC = cs50.get_int("Cuantos colores te gustan: ")
        for i in range(cantidadC):
            color = get_string("color: ")
            persona["colores"].append(color)
        
        print("------------------------------------------")
        datos.append(persona)
        
    for i in datos:
        print(i)
    
    # print(random)
    
    
    
    
# usamons __name__
if __name__ == "__main__": # ejecutar un orden de prioridad o de configuracion
    main()