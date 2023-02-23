//cualquier error que pudo haber existido acá fue erradicado
#include <stdio.h>
#include <windows.h>

int main(){
	int hora, minuto, segundo, x, i;
	//int a,b,c;

	x=1000;//Sleep(x)

	hora=0;
	minuto=0;
	segundo=0;
	printf("Ingresa la hora de inicio:\n");
	scanf("%i",&hora);

	printf("Ingresa el minuto de inicio:\n");
	scanf("%i",&minuto);

	printf("Ingresa los segundos de inicio:\n");
	scanf("%i",&segundo);

	for(hora;hora<=24;hora++){
		for(minuto;minuto<=60;minuto++){
			for(segundo;segundo<=60;segundo++){
				if(segundo==60){
					segundo=0;
					minuto=minuto+1;
					printf("%02i:%02i:%02i\r",hora,minuto,segundo);
					if(minuto==60){
						minuto=0;
						hora=hora+1;
						printf("%02i:%02i:%02i\r",hora,minuto,segundo);
						if(hora==24){
							hora=0;
							printf("%02i:%02i:%02i\r",hora,minuto,segundo);
						}
						else{

						}
					}
					else{

					}
					Sleep(x);

				}
				else{
					printf("%02i:%02i:%02i\r",hora,minuto,segundo);//Estas dos lineas son muy necesarias
					Sleep(x);
				}
			}
		}
	}
	return 0;
}
