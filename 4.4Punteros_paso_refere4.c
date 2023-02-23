//4.4 Realiza 3 funciones que tengan como argumento un valor radio y calculen el
//perimetro de la circunferencia, area del circulo y volumen de la esfera. Se
//debe imprementar una funcion main que haga uso de estas funciones dependiendo
//de la opcion del usuario

#include <stdio.h>
#include <windows.h>
//#include <time.h> //No usaremos numeros random
#include <math.h>

#define PI 3.1416
void perimetro(float *a, float *peri, float z);
void areas(float *b, float *area, float z);
void volumen(float *c, float *volu, float z);

void final();

int main(){

	int opcion, i, tiempo;
	float r, peri, area, volu, z;//radio
	tiempo=100;
	z=PI;



	do{
		system("cls");

		printf(" -----------------------------------\n");
		printf("|  Perimetro  |   Area  |  Volumen  |\n");
		printf(" -----------------------------------\n");

		Sleep(tiempo);
		printf("Elige que dato deseas calcular:\n");
		Sleep(tiempo);
		printf("1. Perimetro de una circunferencia.\n");
		Sleep(tiempo);
		printf("2. Area de un ciruclo.\n");
		Sleep(tiempo);
		printf("3. Volumen de una esfera.\n");
		Sleep(tiempo);
		printf("\nEscribe tu opcion:");
		scanf("%i",&opcion);

	}while(opcion<1 || opcion>3);
	switch(opcion){
		case 1:{
			peri=0;
			r=0;
			printf("\nEscribe el radio(cm) de la circunferencia que quieras calcular su PERIMETRO: ");
			scanf("%f",&r);
			perimetro(&r,&peri,z);

			printf("\nEl perimetro de la circunferencia de radio %0.4f. cm es: %0.0f. cm",r,peri);
			break;
		}
		case 2:{
			area=0;
			r=0;
			printf("\nEscribe el radio(cm) del circulo que quieras calcular su AREA: ");
			scanf("%f",&r);
			areas(&r,&area,z);

			printf("\nEl area del circulo de radio %0.0f cm es: %0.4f cm2",r,area);
			break;
		}
		case 3:{
			r=0;
			volu=0;
			printf("\nEscribe el radio(cm) de la esfera que quieras calcular su Volumen: ");
			scanf("%f",&r);
			volumen(&r,&volu,z);

			printf("\nEl volumen de la esfera de radio %0.0f. cm es: %0.4f. cm3",r,volu);
			break;
		}
	}

	final();
	return 0;
}
void final(){
	printf("\n----------------------------------------------------\n");
	printf("                _....._\n");
    printf("             .-\"\"|     |\"\"-.\n");
    printf("           .'    |     |    '.\n");
    printf("     ,-----|     |     |     |     Imperial Walkers\n");
    printf("   _/  =   |     |     |     |     (AT-AT)\n");
    printf("   |_______|_____|     |_____|\n");
    printf("     ='      |  |'-...-'|  |\n");
    printf("             |  |       |  |\n");
    printf("            \/|  |      /|  |   _ ,--.\n");
    printf("           ( |  |     ( |  |  /_|____|\n");
    printf("            \\|  |      \\|  |     || ||\n");
    printf("             |  |       |  |     ll ll\n");
    printf("             |  |\\      |  |\\\n");
    printf("             /  \\ `.    /  \\ `.\n");
    printf("            |____|-'   |____|-'SSt\n");
}

void perimetro(float *a, float *peri, float z){
	int x;
	x=*a;
	*peri=(2*(z)*(x));
}
void areas(float *b, float *area, float z){
	int x;
	x=*b;
	*area=(z*(pow(x,2)));
}
void volumen(float *c, float *volu, float z){
	int x;
	x=*c;
	*volu=((4/3)*(z)*(pow(x,3)));
}
