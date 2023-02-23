//3.6 saber si un numero es primo
#include <stdio.h>

int main(){

	int x, i, contador;

	printf("Introduce un numero para saber si es primo o no:\n");
	scanf("%i",&x);

	contador=0;

	for(i=1;i<=x;i++){
		if(x%i==0){
			contador=contador+1;
		}
	}
	if(contador==2){
		printf("El numero es Primo\n");
	}
	else{
		printf("El numero No es Primo\n");
	}

	return 0;
}
