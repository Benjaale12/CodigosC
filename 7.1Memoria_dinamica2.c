//Anteriormente solo hemos usado la memoria estatica
#include <stdio.h>
//Ejemplo de memoria Pseudoestatica
int main(){
	int i;
	int N;
	printf("Dale un valor a N: \n");
	scanf("%i",&N);

	int vector[N];

	printf("Ejemplo de memoria Pseudoestatica: \n");
	for(i=0;i<N;i++){//si en N+10 dará error
		vector[i]=i;
	}

	for(i=0;i<N;i++){
		printf("%i,",vector[i]);
	}


	return 0;
}
