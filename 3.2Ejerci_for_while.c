/*3.2 realiza un programa que imprima la cantidad de los numeros pares
entre dos y mil. (]2,1000[)*/

#include <stdio.h>

int main(){

	int x, y, i, contador_pares, contador_impares;//X=2  Y=1000

	//Usaremos FlOAT debido a que la suma de numeros es muy grande
	float suma_pares;//2+4+6+...+888+900+...etc
	float suma_impares;//3+5+7+...+899+901+...etc

	x=2;//menor
	y=2000;//mayor
	contador_pares=0;//hay que declarar los valores de
	contador_impares=0;
	suma_pares=0;
	suma_impares=0;

	//i será el valor ira cambiando mediante el ciclo no termine

	for(i=x+1; i<y;i++){//for(i>x; i<y;i++){NO ESCRIBIRLO ASÍ
		if(i%2==0){
			contador_pares=contador_pares+1;
			suma_pares=suma_pares+i;
		}
		else /*if (i%2!=0)*/{
			contador_impares=contador_impares+1;
			suma_impares=suma_impares+i;
		}
	}


	printf("Entre 2 y 2mil hay %i numeros PARES.\n", contador_pares);
	printf("La suma de todos los numeros PARES es: %0.0f\n\n",suma_pares);//printf ("%0.0f\n\n",x); para que no aparezcan decimales

	printf("Entre 2 y 2mil hay %i numeros IMPARES.\n", contador_impares);
	printf("La suma de todos los numeros IMPARES es: %0.0f\n\n",suma_impares);

	/*Contador de numeros PARES e IMPARES de numeros de cifras introducidas
	por teclado*/

	int x2, y2, i2, contador_pares2, contador_impares2;//X=Menor  Y=Mayor
	float suma_pares2;//2+4+6+...+888+900+...etc
	float suma_impares2;//3+5+7+...+899+901+...etc


	printf("---------------------------------------------------------------\n\n");
	printf("Escribre el rango de numeros de los que necesitas sacar los PARES e IMPARES\n\n");

	printf("Escribe el primer digito(Menor)\n");//X2(menor)
	scanf("%i",&x2);

	printf("Escribe el primer digito(Mayor)\n");//Y2(mayor)
	scanf("%i",&y2);
	printf("\n\n\n");


	contador_pares2=0;//hay que declarar los valores de
	contador_impares2=0;
	suma_pares2=0;
	suma_impares2=0;


	for(i2=x2+1; i2<y2;i2++){//Entre
		if(i2%2==0){
			contador_pares2=contador_pares2+1;
			suma_pares2=suma_pares2+i2;
		}
		else /*if(i2%2!=0)*/{
			contador_impares2=contador_impares2+1;
			suma_impares2=suma_impares2+i2;
		}

	}
	printf("Entre %i y %i hay %i numeros PARES.\n",x2,y2, contador_pares2);//ENTRE significa que no contabiliza a x ni a y; ]x,y[
	printf("La suma de todos los numeros PARES es: %0.0f\n\n",suma_pares2);

	printf("Entre %i y %i hay %i numeros IMPARES.\n",x2, y2, contador_impares2);
	printf("La suma de todos los numeros IMPARES es: %0.0f\n\n",suma_impares2);

	return 0;
}
