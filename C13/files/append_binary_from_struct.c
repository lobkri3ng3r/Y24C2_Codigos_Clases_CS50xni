// C program for writing
// struct to file
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

// a struct to be read and written
typedef struct {
	int id;
	char primer_nombre[20];
	char apellido[20];
}persona;

int main()
{
	FILE* outfile;

	// Abrir archivo para escritura
	outfile = fopen("persona.bin", "r");
	if (outfile == NULL) {
		printf("\nError al abrir el archivo\n");
		return 1;
	}

	persona input1;
	printf("primer nombre: ");
	scanf("%s", input1.primer_nombre);
	printf("apellido: ");
	scanf("%s", input1.apellido);
	printf("id: ");
	scanf("%d", &input1.id);

	// Escribrir struct en el archivo
	int flag = 0;
	flag = fwrite(&input1, sizeof(persona), 1,
				outfile);
	if (flag) {
		printf("Contenido escrito correctamente\n");
	}
	else
		printf("Error al momento de escribir el archivo\n");

	// cierre del archivo
	fclose(outfile);

	return 0;
}
