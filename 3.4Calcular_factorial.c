//3.5Escribe un progrma que calcule el factorial de un numero n entero positivo, leido por teclado
#include <stdio.h>
#include <windows.h>
//un factorial de 8 es 1x2x3x4x5x6x7x8=
//factorial de 8(8!=1*2*3*4*5*6*7*8)
int main(){

	int x,i,fact;
	int y;

	printf("Introduce un numero que desees y calcularemos el FACTORIAL de este:\n");
	scanf("%i",&x);
	y=1000;
	i=1;
	fact=1;
	printf("%i!=",x);
	for(i;i<=x;i++){
		fact=fact*i;
		Sleep(y);
		if(i<x){
			printf(" %ix",i);
		}
		else{
			printf(" %i=",i);
		}
	}
	printf(" %i\n",fact);
	return 0;
}
