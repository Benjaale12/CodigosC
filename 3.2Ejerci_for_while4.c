//Realiza un programa que calcule la media de x numeros introducidos por teclado

#include <stdio.h>

int main(){

	int x;//X=es la cantidad de numeros que intruduciré por teclado
	int y;//la variable de las notas introducidas por teclado
	int i; //cantidad de notas contabilizadas del ciclo for
	int suma;//suma de todas la notas en bulce

	printf("Introduce la CANTIDAD de notas que quieras calcular el PROMEDIO:\n");
	printf("PD: Recuerda que la nota mas baja es 10 y la mas alta es 70\n");
	scanf("%i",&x);
	printf("\n---------------------------------------------------------------\n");

	i=1;
	suma=0;
	while(i<=x){
		printf("Introduce el valor de la %ia nota:\n",i);
		scanf("%i",&y);
		if(y>=10 && y<=70){
			suma=suma+y;
			i++;
		}


		else{
			printf("Recuerda que la nota mas baja es 10 y la mas alta es 70\n");
			printf("VUELVE A INTENTARLO!!!\n");
		}

	}

	suma=suma/x;

	printf("\nLa media de las %i Notas es: %i\n",x,suma);

	return 0;
}
