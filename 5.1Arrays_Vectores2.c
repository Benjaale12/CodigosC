//5.1 Darle a un valor de 10 enteros y leerlos despues.

#include <stdio.h>

int main(){
	int v[10];
	int i;

	for(i=0;i<10;i++){
		printf("Dale valor al vector %i: ",i+1);
		scanf("%i",&v[i]);
	}
	printf("\n-----------------------------------------\n\n");
	for(i=0;i<10;i++){
		printf("Valor No. %i: %i\n",i+1,v[i]);
	}

	return 0;
}
