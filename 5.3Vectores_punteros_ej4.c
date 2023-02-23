#include <stdio.h>

int main(){
	int vec[3];
	funcion(vec);
	leer(vec);

	return 0;
}
void funcion(int a[]){
	int i;
	for(i=0;i<3;i++){
		printf("\nIntroduce un numero para la posicion %i: ",i+1);
		scanf("%i",&a[i]);
	}
}
void leer(int b[]){
	int i;
	printf("-------------------------------------\n");
	for(i=0;i<3;i++){
		printf("|%i|\n",b[i]);
	}
}
