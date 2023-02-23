//3.3 Escribe un programa que lea dos numeros y muestre por pantalla todos los numeros comprendidos entre esos numeros

#include<stdio.h>

int main(){

	int x, y, i;// X=Menor    Y=Mayor  ==]x,y[

	printf("Escribe dos numeros para imprimir los numeros entre estos.\n\n");

	printf("introduce un numero(Menor)\n");
	scanf("%i",&x);
	do{
		printf("introduce un numero(Mayor)\n");
		scanf("%i",&y);
		printf("\n\n");
	}while(y<x);
	i=x+1;
	for(i;i<y;i++){
		printf("%i|",i);
	}

	printf("\n");
	return 0;
}
