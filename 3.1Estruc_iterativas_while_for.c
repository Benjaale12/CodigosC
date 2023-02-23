/*3.1 Escribe un programa que lea dos numeros y muestre por pantalla todos los
los numeros comprendidos entre ellos (]x,y[)*/

#include <stdio.h>
int main(){


	int x,y,i;//Normalmente se usa i, j, k... para los bucles
	//X=Numero mas bajo
	//Y=Numero mas alto

	printf("Introducir un numero: \n");
	scanf("%i",&x);

	printf("Introducir un numero mayor al anterior:");
	scanf("%i",&y);

	//Bucle for:
	if(y>x){

		for(i=x+1; i<y;i++){//si el bucle incluyera a X and Y sería "for(i=x;i<=y;i++)"
			printf("%i|", i);
		}

	}
	else{
		printf("ERROR 408. Lee cuidadosamente las instrucciones");
	}

	printf("\n");

	//Bucle while:
	if(y>x){
		i=x+1;
		while(i<y){
			printf("%i|",i);
			i++;
		}
	}
	else{
		printf("ERROR 408. Lee cuidadosamente las instrucciones");
	}
	printf("\n");

	return 0;
}
