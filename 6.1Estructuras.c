//Estructuras
#include <stdio.h>
#include <string.h>

typedef struct{
	int paginas;
	char nombre[50];
	float precio;
}libro;

int main(){
	libro JT,CR;//jt=juego de tronos//CR=Choque de reyes
	JT.paginas=50;
	strcpy(JT.nombre,"Juego de Tronos");
	JT.precio=25.5;

	CR.paginas=150;
	strcpy(CR.nombre,"Choque de reyes");
	CR.precio=15.5;


	printf("El libro juego de tronos tiene %i paginas\n",JT.paginas);
	printf("El nombre del libro es %s.\n",JT.nombre);
	printf("El precio del libro de juego de tronos es: %0.2f dolares.\n",JT.precio);

	printf("\n");
	printf("El libro Choque de Reyes tiene %i paginas\n",CR.paginas);
	printf("El nombre del libro es %s.\n",CR.nombre);
	printf("El precio del libro Choque de Reyes es: %0.2f dolares.\n",CR.precio);


	return 0;
}
