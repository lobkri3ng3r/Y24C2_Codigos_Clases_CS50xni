#include <stdio.h>

//DEFINIR UNA ESTRUCTURA


int main() {
    FILE *archivo;
    archivo = fopen("nombres.txt", "w"); // Abrir el archivo en modo escritura ("w")

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1; // Salir del programa con un código de error
    }

    // CREAR LA VARIABLE CON SU ESTRUCTURA

    // Leer nombres y números desde el usuario y guardarlos en el archivo
    for (int i = 0; i < 5; i++) {

        // INGRESAR LOS DATOS

        // Escribir los datos en el archivo
        fprintf(archivo, "Nombre: %s, Número: %d\n", nombres[i], numeros[i]);
    }

    // Cerrar el archivo después de usarlo
    fclose(archivo);

    printf("Los nombres y números se han guardado en el archivo.\n");

    return 0; // Salir del programa con éxito
}
