#include <stdio.h>
#include <string.h>
#include <windows.h>
#define pi 3.1416

void primera();
void segunda();
void tercera();
int h=777;

int main(){
	int opcion;
	printf("Elige una opcion de lo que quieres hacer:\n");
	scanf("%i",&opcion);

	switch(opcion){
		case 1:{
			primera();
			break;
		}
		case 2:{
			segunda();
			break;
		}
		case 3:{
			tercera();
			break;
		}
	}


	return 0;
}
void primera(){
	float u;
	u=pi;

	printf("El Valor de H es: %i, mientras que el valor Pi es: %f\n",h,u);
	printf("La longitud de circunferencia de radio 5 es: %f.\n",2*5*pi);

	printf("Informacion personal:\n");
	#include "mi_infor_benja.c"

}
void segunda(){
	int hora, min, seg;
	int i,x;
	x=1000;

	for(hora=0;hora<24;hora++){
		for(min=0;min<60;min++){
			for(seg=0;seg<60;seg++){
				printf("%02i:%02i:%02i.\r",hora,min,seg);
				Sleep(x);
			}
		}
	}

}
void tercera(){
	/*char mensaje[20];
	strcpy(mensaje,"Hola mamabuevo\n");*/
//las dos lineas de arriba equivalen a la de abajo
	char mensaje[20]="Hola mamabuevo\n";

	printf(mensaje);

}
void cuarta(){


}
