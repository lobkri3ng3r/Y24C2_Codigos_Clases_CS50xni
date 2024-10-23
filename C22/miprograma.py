from cs50 import SQL

## crear el cursor y la conexion a la base de datos
cursor = SQL("sqlite:///estudiantes.db")

# Realizar la primer consulta
# Create
cursor.execute('''
    CREATE TABLE IF NOT EXISTS "Estudiantes"(
               id integer PRIMARY KEY,
               nombre text,
               carrera text
               );
''')

while True:
    nombre = input("Ingresa un nombre de un estudiante: ")
    carrera = input("Ingresa su carrera: ")

    cursor.execute('''
    INSERT INTO Estudiantes (nombre, carrera) VALUES (?,?)
    ''',nombre,carrera)

    continuar = input("continuar???")
    if continuar == 'no':
        print("fin")
        break

info = cursor.execute('''SELECT * FROM Estudiantes where nombre like "%mike%" ''')

print(info)
