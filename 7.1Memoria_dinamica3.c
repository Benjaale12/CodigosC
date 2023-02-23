//Anteriormente solo hemos usado la memoria estatica
#include <stdio.h>
#include<stdlib.h>//Es obligacion usarla para mememoria dinamica
//Ejemplo de memoria Dinamica
//La memoria dinamica fuerza mucho el procesador

int main(){

	int i;
	int N;
	int *vector;

	printf("Dame un valor para N: ");
	scanf("%i",&N);

	vector=(int*)malloc(N*sizeof(int));

	if(vector==0){
		printf("No se ha podido reservar la memoria.\n");
	}

	else{
		for(i=0;i<N;i++){
			*(vector+i)=i;
		}

		for(i=0;i<N;i++){
			printf("%i,",*(vector+i));
		}
		printf("\n");


		printf("Dame otro valor para N: ");
		scanf("%i",&N);
		vector=(int*)malloc(N*sizeof(int));

		if(vector==0){
			printf("No se ha podido reservar la memoria.\n");
		}
		else{
			for(i=0;i<N;i++){
				*(vector+i)=i;
			}
			for(i=0;i<N;i++){
				printf("%i,",*(vector+i));
			}
		}
	}

	return 0;
}
