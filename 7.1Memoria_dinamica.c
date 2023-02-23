//Anteriormente solo hemos usado la memoria estatica
#include <stdio.h>
//Ejemplo de memoria estatica
int main(){
	int i;
	int N=50;
	int vector[N];

	printf("Ejemplo de memoria estatica: \n");
	for(i=0;i<N;i++){//si en N+10 dará error
		vector[i]=i;
	}

	for(i=0;i<N;i++){
		printf("%i,",vector[i]);
	}


	return 0;
}
