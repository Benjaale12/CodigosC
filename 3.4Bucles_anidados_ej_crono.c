//3.4 Hacer las tablas de multiplicar del 1 al 9

#include <stdio.h>

int main(){

	int i, j;

	for(i=1;i<=10;i++){//FOR(Inicializador, Condicion, va de 1 en 1 i++)
		for(j=1;j<=10;j++){
			printf("%i x %i= %i.\n",i,j,i*j);
		}
		printf("\n");//esto hace una separación para 10 muiltiplicaciones distintas
		system("pause");//para 10 multiplicaciones deberas de apretar ENTER
		printf("\n");

	}
	/*i=1;
	j=1;
	while(i<=10){
		while(j<=10){
			printf("%i x %i=%i.\n",i,j,i*j);
			j++;
		}
		i++;
	}*/
	return 0;
}
