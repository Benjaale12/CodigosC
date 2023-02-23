/*Escribe un programa que acepte tres numeros(Horas, minutos y segundos) y
devulva la hora que será dentro de un segundo, controlando que sea una
una hora correcta*/

#include <stdio.h>

int main(){

	int h, min, seg;

	printf("Introduce el valor para Hora: \n");
	scanf("%i",&h);
	printf("Introduce el valor para Minuto: \n");
    scanf("%i",&min);

    printf("Introduce el valor para Segundo: \n");
    scanf("%i",&seg);

	printf("\nLa hora ingresada es: %i:%i:%i Horas.\n",h,min,seg);

	printf("\n---------------------------------------------------\n\n");

//Que hora será dentro de un segundo
	if(h<=23 && min<=59 && seg<=59){
		if(seg==59 && min!=59){
			seg=seg*0;
			min=min+1;
			printf("La hora dentro de 1 segundo sera %i:%i:%i Horas.\n",h,min,seg);
		}
		else if(seg==59 && min==59 && h!=23){
			seg=seg*0;
			min=min*0;
			h=h+1;
			printf("La hora dentro de 1 segundo sera %i:%i:%i Horas.\n",h,min,seg);
		}
		else if(seg==59 && min==59 && h==23){
			seg=seg*0;
			min=min*0;
			h=h*0;
			printf("La hora dentro de 1 segundo sera %i:%i:%i Horas. PERO DEL SIGUIENTE DIA!!!\n",h,min,seg);
		}
		else if(seg!=59){
			seg=seg+1;
			printf("La hora dentro de 1 segundo sera %i:%i:%i Horas.\n",h,min,seg);
		}
	}
	else{
		printf("La hora que acabas de ingresar NO ES VALIDA.\n");
	}


	printf("\n---------------------------------------------------\n\n");

	if(h<=23 && min<=59 && seg<=59){
		seg=seg+1;

		if(seg==60){
			seg=0;
			min=min+1;
		}
		if(min==60){
			min=0;
			h=h+1;
		}
		if(h==24){
			h=0;
		}
		printf("La hora dentro de 1 segundo sera %i:%i:%i Horas.\n",h,min,seg);
	}
	else{
		printf("La hora que acabas de ingresar NO ES VALIDA.\n");
	}

	printf("\n---------------------------------------------------\n\n");

return 0;

}
