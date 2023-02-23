//introducir valores numericos en un array mediante Punteros

#include <stdio.h>

void funcion();
void imprimir();

int main(){

	int vec[3];

	funcion(vec);
	imprimir(vec);

	return 0;
}
void funcion(int *vec){
	int i;

	for(i=0;i<3;i++){
		printf("Introduce un valor para la posicion %i:\n",i+1);
		scanf("%i",(vec+i));//como se usa puntero no lleva el &&&
	}
}
void imprimir(int *vec){
	int i;
	for(i=0;i<3;i++){
		printf("|%i|",*(vec+i));//cuando se imprime se pone el puntero
		//*(vec+i)==vec[i]
	}
}
