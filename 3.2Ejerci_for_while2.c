//Realiza un programa que imprima la suma de los numeros pares entre dos y mil.

#include <stdio.h>

int main(){

	int i;//
	//int x, y;//
	float suma; //Suma=Es la suma de todos los numeros pares entre 2 y 2000
	/*debido a que suma es un numero muy grande, este se utilizará con float*/

	suma=0;
	/*x=2;
	y=1999;*/

	for(i=2; i<=2000; i=i+2){//i+=2. Si fuese el caso de que vaya 1 en 1 este sería (i++)
		suma=suma+i;// Se puede escribir: (suma+=i;)
	}
	printf("El resultado de la suma es: %f\n", suma);
	suma=0;
	for(i=3; i<=2000; i=i+2){//i+=2. Si fuese el caso de que vaya 1 en 1 este sería (i++)
		suma=suma+i;// Se puede escribir: (suma+=i;)
	}
	printf("El resultado de la suma es: %f\n", suma);

	return 0;
}
