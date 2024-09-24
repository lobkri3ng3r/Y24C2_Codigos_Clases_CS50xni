scores = []
n = int(input("Ingrese un numero: "))
for i in range(n):
    cal = int(input("Ingrese calificacion: "))
    scores.append(cal)

print(sum(scores)/len(scores))
