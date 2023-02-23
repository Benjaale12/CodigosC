//4.2 Calcular el factorial de 2 numeros con una funcion
//5!=5x4x3x2x1
#include <stdio.h>
#include<time.h>
#include <windows.h>

int factorial();

int main(){

	int x, y,z;
	int fact1, fact2,fact3;

	printf("FACTORIALES:\n\n");

	printf("\nIntroduce un valor para X: \n");
	scanf("%i",&x);
	fact1=factorial(x);
	printf("=%i\n",fact1);

	printf("\nIntroduce un valor para Y: \n");
	scanf("%i",&y);
	fact2=factorial(y);
	printf("=%i\n",fact2);

	printf("\nIntroduce un valor para Z: \n");
	scanf("%i",&z);
	fact3=factorial(z);
	printf("=%i\n",fact3);

	return 0;
}

int factorial(int a){
	int t,aux,i;//variable de tiempo
	aux=1;//aux es el resultado de la multiplicacion de los factoriales
	t=50;
	printf("%i!=",a);//ej: "5!="
	for(i=1;i<=a;i++){
		if(i==a){
			printf("%i",i);
		}
		else{
			printf("%ix",i);
		}
		Sleep(t);
		aux=aux*i;
	}
	return aux;//aux=fact1 0 fact2 o fact3
}
