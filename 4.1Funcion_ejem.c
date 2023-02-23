//4.1 Calcular el numero mayor entre dos numeros con una funcion
#include <stdio.h>

int maximo();

int main(){

	int x, y;

	x=1;
	y=4;

	maximo(x,y);

	printf("Dentro de int main\n\n");

	printf("El valor de X en main es %i y el valor de Y en main es %i\n\n",x,y);

	return 0;
}
int maximo(int a, int b){//a=x   ; b=y
	printf("dentro de int maxima\n\n");
	a=8;
	b=5;
	printf("El valor de X es %i y el valor de Y es %i\n\n",a,b);
	return 0;
}
