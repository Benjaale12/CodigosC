//3.6 Mostar todos los numeros primos y no primos desde el rango x a y, tambien la cantidad de numeros
#include <stdio.h>

int main(){

	int x, y;
	int i, j;
	int contador;
	//int contador_primo, contador_noprimo;

	int c_primos, c_noprimos;//cantidad de primos

	int n_primo, n_noprimo;

	printf("Escribe un rango desde X a Y para saber que numeros de estos son Primos y No Primos\n");
	printf("Introduce un valor para X(menor):\n");
	scanf("%i",&x);

	printf("Introduce un valor para Y(mayor):\n");
	scanf("%i",&y);
	printf("\n");
	contador=0;


	for(j=x;j<=y;j++){
		contador=0;
		i=1;
		for(i;i<=j;i++){
			if(j%i==0){
				contador=contador+1;
			}
		}
		if(contador==2){
			printf("-%i  Primo\n", j);
		}
		else{
			printf("-%i  No es Primo\n", j);
		}
	}
	return 0;
}
