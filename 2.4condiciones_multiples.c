/*2.4 Hacer un programa que diga si un numero insertado por teclado se encuentra
entre 1 y 10*/

#include <stdio.h>

int main(){

	int x;

	printf("Introduce un numero entre 1 y 10.\n");
  	scanf("%i",&x);

  	if(x>=1 && x<=10){//&& significa AND, osea es una doble condicion
  //if(x>=1 || x<=10){//Significa que con una de las condiciones sea cierta Entra.
    	printf("El numero %i esta entre 1 y 10.\n",x);
  	}
  	else{
    	printf("El numero %i NO esta en el rango 1-10.\n",x);
  	}

return 0;
}
