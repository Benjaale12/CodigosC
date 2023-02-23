//4.1 Calcular el numero mayor entre dos numeros con una funcion
#include <stdio.h>

int maximo();

int main(){
	int x,y,max;

	printf("Ingresa dos valores para saber cual de ambos es mayor.\n");
	printf("Ingresa un valor para X:\n");
	scanf("%i",&x);

	printf("Ingresa un valor para Y:\n");
	scanf("%i",&y);

	/*x=3;
	y=10;*/

	max=maximo(x,y);//max=aux;

	printf("El valor de maximo es %i.\n\n",max);

	return 0;
}

int maximo(int a, int b){//a=x     b=y;
	int aux;
	if(a>b){
		aux=a;
	}
	else{
		aux=b;
	}
	return aux;//con return solo se puede una sola variable
}
