//Hacer un vector con 100 enteros que esten comprendido desde 0 a 2 y contar con un vector dinamico cuantas veces aparezca cada numero

//Malloc y calloc asigna espacio en la memoria
//Malloc=no inicializa el valor de sus variables osea hay que asignarle si o si un valores
//Calloc=a los espacio de la memoria los inicializa en 0
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<windows.h>

void aleatorio(int vector[], int tam);

int main(){

	int i, op;
	int N=3;
	int vector[100];//vector estatico
	int *contador;//vector dinamico

	contador=(int*)calloc(N,sizeof(int));//Con Malloc se asigna memoria pero se inicializa con basura
	if(contador==NULL){
		printf("No se ha podido asignar la memoria.\n");
	}
	else{
		printf("Con calloc se inicializa las asignaciones de memoria=0: \n");
		for(i=0;i<N;i++){
			printf("%i,",*(contador+i));//contador[i] pero como usamos calloc/malloc se usa con puntero y quedaría *(contador+i)
		}
		printf("\n\n\n");

		aleatorio(vector,100);
		for(i=0;i<100;i++){
			op=vector[i];
			*(contador+op)=*(contador+op)+1;//2 1 0
		}
		for(i=0;i<N;i++){
			printf("El numero %i se ha repetido: %i veces.\n", i,*(contador+i));
		}

	}
	free(contador);//con esto liberamos la memoria ram usar del vector dinamico "contador", potque ya no la vamos a usar
	//Siempre usar free al final o cuando dejemos de usar algun vector para liberar la memoria que usamos durante el programa
	return 0;
}
void aleatorio(int vector[], int tam){//int tam lo declaramos como numero=100

	int i;
	srand(time(NULL));
	for(i=0;i<tam;i++){
		vector[i]=rand()%3;//%3= 0 1 2
	}
	printf("\n");
}
