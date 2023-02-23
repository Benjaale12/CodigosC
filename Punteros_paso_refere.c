//4.4Punteros señalan y los & la dirección
#include <stdio.h>

int main(){

	int x, *y;

	x=4;
	y=&x;

	printf("El valor de *Y es: %i\n",*y);

	return 0;
}
