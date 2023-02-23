/* 3.2 Realiza un programa que imprima la cantidad de los numeros pares
entre dos y mil. (]2,1000[).Pero con while.Tambien imprimirá por pantallla todos los numeros pares e impares*/
#include <stdio.h>

int main(){

	int x, y, i;// X=es el valor mas bajo     Y=es el valor mas alto
	int c_pares, c_impares;

	printf("Este programa te dira la cantidad de PARES e IMPARES que hay entre los siguientes numeros:\n");

	printf("Introduce el valor MENOR:\n ");
	scanf("%i",&x);

	c_pares=0;
	c_impares=0;
	i=x+1;

	do{
		printf("Introduce el valor MAYOR:\n ");
		scanf("%i",&y);
	}while(y<=x);
	while(i<y){
		if(i%2==0){
			c_pares=c_pares+1;
			i++;
		}
		else{
			c_impares=c_impares+1;
			i++;
		}
	}


	printf("\nAhora te diremos la cantidad de numeros pares e impares que hay entre %i y %i!!!\n",x,y);
	printf("\n -----------------------\n");
	printf("|Hay %i PARES y %i IMPARES|\n",c_pares,c_impares);
	printf(" -----------------------\n");

	i=x+1;

	printf("Pares:\n");
	while(i<y){
		if(i%2==0){
			printf("%i|",i);
			i++;
		}
		else{
			i++;
		}
	}
	i=x+1;
	printf("\nImpares:\n");
	while(i<y){
		if(i%2!=0){
			printf("%i|",i);
			i++;
		}
		else{
			i++;
		}
	}

	return 0;
}
