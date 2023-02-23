#include <stdio.h>

typedef struct{
	int matematicas;
	int ingles;
	int fisica;
}notas;

void darnotas(notas *not);


int main(){

	notas not;//notas=tipo de variable  not=nombre de la variable

	darnotas(&not);//llama una funcion usando una variable llamada not

	printf("------Notas fuera de la funcion-------\n");
	printf("Nota de matematicas: %i\n",not.matematicas);
	printf("Nota de ingles: %i\n",not.ingles);
	printf("Nota de fisica: %i\n",not.fisica);
	return 0;
}

void darnotas(notas *not){//notas=tipo de variable *not=nombre de la variable
	printf("Introduce la nota de matematicas: \n");
	//scanf("%i",&not.matematicas);
	scanf("%i",&not->matematicas);//en de un púnto es ->

	printf("Introduce la nota de matematicas: \n");
	scanf("%i",&not->ingles);

	printf("Introduce la nota de matematicas: \n");
	scanf("%i",&not->fisica);

	printf("------Notas dentro de la funcion-------\n");
	printf("Nota de matematicas: %i\n",not->matematicas);
	printf("Nota de ingles: %i\n",not->ingles);
	printf("Nota de fisica: %i\n",not->fisica);
	//Esto y lo de arriba es lo mismo
	printf("------Notas dentro de la funcion pero con punto-------\n");
	printf("Nota de matematicas: %i\n",(*not).matematicas);
	printf("Nota de ingles: %i\n",(*not).ingles);
	printf("Nota de fisica: %i\n",(*not).fisica);
}
