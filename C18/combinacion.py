empleados = [
    {"nombre": "Miguel", "cargo": "soporte tecnico", "salario": 500},
    {"nombre": "Joel", "cargo": "full stack", "salario": 1000},
    {"nombre": "Jonathan", "cargo": "CEO", "salario": 1}
]

print(empleados[0]["nombre"])

compras = {
    "frutas": ["manzanas", "bananos"],
    "verduras": ["zanahorias", "brocoli"],
    "lacteos": ["leche", "queso"]
}

compras["frutas"].append("uvas")
print(compras)

empleados = [
    {"nombre": "Juan", "cargo": "Gerente", "salario": 5000},
    {"nombre": "Ana", "cargo": "Desarrolladora", "salario": 4000},
    {"nombre": "Luis", "cargo": "Soporte tecnico", "salario": 3000}
]
print(empleados[0]["nombre"])

empleados = []
n = int(input("Ingrese la cantidad de empleados: "))

for i in range(n):
    empleado = {}
    nombre = input("Ingrese el nombre del empleado: ")
    cargo = input("Ingrese el cargo del empleado: ")
    salario = int(input("Ingrese el salario del empleado: "))
    empleado["nombre"] = nombre
    empleado["cargo"] = cargo
    empleado["salario"] = salario
    empleados.append(empleado)

print(empleados)

compras = {}
c = int(input("Ingrese la cantidad de categorias: "))
for i in range(c):
    list = []
    cat = input("Ingrese el nombre de la categoria: ")
    p = int(input("Ingrese la cantidad de productos para esa categoria: "))
    for j in range(p):
        pro = input("Ingrese nombre del producto: ")
        list.append(pro)
    compras[cat] = list

print(compras)

