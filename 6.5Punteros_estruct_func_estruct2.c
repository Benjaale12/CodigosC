//lo mismo pero con vectores
#include <stdio.h>

typedef struct{//solo hay una nota para cada materia
	int matematicas;
	int ingles;
	int fisica;
}notas;

void darnotas(notas not[]);


int main(){

	notas not[3];//notas=tipo de variable  not=nombre de la variable

	darnotas(not);//llama una funcion usando una variable llamada not

	printf("------Notas fuera de la funcion-------\n");
	printf("Nota de matematicas: %i\n",not[0].matematicas);
	printf("Nota de ingles: %i\n",not[0].ingles);
	printf("Nota de fisica: %i\n",not[0].fisica);
	return 0;
}

void darnotas(notas not[]){//notas=tipo de variable *not=nombre de la variable
	printf("Introduce la nota de matematicas: \n");
	scanf("%i",&not[0].matematicas);

	printf("Introduce la nota de matematicas: \n");
	scanf("%i",&not[0].ingles);

	printf("Introduce la nota de matematicas: \n");
	scanf("%i",&not[0].fisica);
	printf("\n");

	printf("------Notas dentro de la funcion-------\n");
	printf("Nota de matematicas: %i\n",not[0].matematicas);
	printf("Nota de ingles: %i\n",not[0].ingles);
	printf("Nota de fisica: %i\n",not[0].fisica);
}
