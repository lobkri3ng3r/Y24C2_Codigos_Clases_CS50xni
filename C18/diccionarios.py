calificaciones = {"Juan" : 78, "Miguel": 60, "Andrea": 99, "Joseph": 100}
print(calificaciones)
print(calificaciones["Miguel"])
print(calificaciones.get("Miguel"))
calificaciones.update({"Miguel": 70, "Camila": 90})
print(calificaciones)
calificaciones.pop("Miguel")
print(calificaciones)
print(calificaciones.keys())
print(calificaciones.values())
calificaciones["Camila"] = 100
print(calificaciones)
