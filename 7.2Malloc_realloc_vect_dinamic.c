//Realizar un vector dinamico de 10 elementos aleatorios comprendidos entre 0 y 2 y eliminar los numeros repetidos
//reajustando el vectores
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// i1 j2 0 1 2 1 1 1 0 0 -->se elimina el ultimo numero

void aleatorio(int *vector, int N);

int main(){
	int N=10;
	int *vector; //vector dinamico
	/*int ***vector;
	**vector=tiene un puntero menos que el de arriba*/
	vector=(int*)malloc(N*sizeof(int));//Asignamos el tamañno al vectores
	/*vector=(int*****)malloc(N*sizeof(int****));-->siempre tiene un puntero menos*/

	if(vector==NULL){
		printf("No se ha podido reservar espacio de memoria.\n");
	}
	else{
		int i, j, k;
		aleatorio(vector,N);

		for(i=0;i<N;i++){
			j=i+1;
			while(j<N){
				if(*(vector+i)==*(vector+j)){
					for(k=j;k+1<N;k++){
						*(vector+k)=*(vector+k+1);
					}
					N--;
				}
				else{
					j++;
				}

			}
		}
		vector=(int*)realloc(vector,N*sizeof(int));//Redimensiona el vector conservando sus valores
		if(vector==NULL){
			printf("No se ha podido reservar espacio de memoria.\n");
		}
		else{
			for(i=0;i<N;i++){
				printf("%i",*(vector+i));
			}
			printf("\n");
		}
	}

	return 0;
}

void aleatorio(int *vector, int N){
	int i;
	srand(time(NULL));

	for(i=0;i<N;i++){
		*(vector+i)=rand()%3;//3= 0  1  2
		printf("%i",*(vector+i));
	}
	printf("\n");
}
