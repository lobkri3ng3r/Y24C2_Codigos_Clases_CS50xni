def suma(argumento_normal,*numeros, **kwargs):
    resultado = 0
    print(argumento_normal)
    print(numeros)
    print(kwargs)
    for i in numeros:
        resultado += i
    return resultado

# args y kwargs
print(suma(1,2,3,4,5,6, valor1=5, valor2=7))