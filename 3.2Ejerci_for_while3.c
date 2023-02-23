/*3.2 realiza un programa que imprima la cantidad y la suma de los numeros pares
entre dos y mil. (]2,1000[)*/

#include <stdio.h>

int main(){

	int x, y, i;//X=Valor mas bajo  Y=Valor mas alto
	int contador_pares, contador_impares;
	float suma_pares, suma_impares;

	contador_pares=0;
	contador_impares=0;

	suma_pares=0;
	suma_impares=0;

	printf("Introduce dos numeros para poder saber la cantidad de PARES e Impares que hay entre ellos. Ademas de saber la suma de estos.\n\n");

	printf("Intruduce el primero digito(Mas bajo).\n");
	scanf("%i",&x);

	printf("Intruduce el segundo digito(Mas alto).\n");
	scanf("%i",&y);

	printf("\n\n");

	i=x+1;

	if(x<y){
		while(i<y){
			if(i%2==0){
				contador_pares=contador_pares+1;
				suma_pares=suma_pares+i;
				i++;
			}
			else{
				contador_impares=contador_impares+1;
				suma_impares=suma_impares+i;
				i++;
			}
		}
		printf("Cantidad de PARES: %i\n",contador_pares);
		printf("Suma de PARES: %0.0f\n",suma_pares);

		printf("\n\n");

		printf("Cantidad de IMPARES: %i\n",contador_impares);
		printf("Suma de IMPARES: %0.0f\n",suma_impares);
	}

	else{
		printf("LEE BIEN LAS INTRUCIONES. ESCRIBE CORRECTAMENTE LOS NUMEROS.\n");
	}


	return 0;
}
