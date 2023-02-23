//Estructura dentro de otra Estructura
//Equipos de futbol
//falta mejorar system("cls")
#include<stdio.h>
#include<string.h>
#define N 50

void vacio();
void cambio(char palabra[N]);
void anadesel();
void anadejug();
void consulta();

typedef struct{//Jugadores de la seleccion
	char nombre_jug[N];
	char club[N];
	int lleno_jug;
}jugador;

typedef struct{//Seleccion de futbol
	char nombre_sel[N];
	jugador jug[11];//11 jugadores??
	int lleno_sel;
}seleccion_nacional;

seleccion_nacional sel[3];//Se pueden tener hasta 3 selecciones de futbol

int main(){

	char op_menu;
	int op_tres_op;

	vacio();//int lleno se se inicializa con Valor=0

	do{
		do{
			printf("Elige la accion que deseas hacer: \n");
			printf("1-Anadir una Seleccion de futbol.\n");
			printf("2-Anadir un Jugador a la seleccion de futbol.\n");
			printf("3-Cosultar por un jugador profesional de futbol.\n");
			printf("-Escribe tu opcion: ");
			scanf("%i",&op_tres_op);

		}while(op_tres_op<1 || op_tres_op>3);

		switch(op_tres_op){
			case 1:{
				anadesel();
				break;
			}
			case 2:{
				anadejug();
				break;
			}
			case 3:{
				consulta();
				break;
			}
		}
		/*if(op_tres_op==1){
			anadesel();//agrega a una seleccion
		}
		else if(op_tres_op==2){
			anadejug();//agrega a un jugador de futbol y su info
		}
		else if(op_tres_op==3){
			consulta();//consulta por un jugador
		}*/
		printf("Deseas hacer otra accion?(S/N): \n");
		fflush(stdin);
		scanf("%c",&op_menu);

	}while(op_menu=='S' || op_menu=='s');
	return 0;
}

void vacio(){
	//sel=info selecciones	jug=info jugadores
	int i, j;

	for(i=0;i<3;i++){//3 Selecciones
		sel[i].lleno_sel=0;
		for(j=0;j<11;j++){//11 porque son 11 jugadores
			sel[i].jug[j].lleno_jug=0;
		}
	}
}

void cambio(char palabra[N]){
	int i;

	for(i=0;i<N;i++){
		if(palabra[i]=='\n'){
			palabra[i]='\0';
		}
	}
}

void anadesel(){//añadimos una seleccion de futbol

	int i, aux;
	aux=0;

	for(i=0;i<3 && aux==0;i++){
		if(sel[i].lleno_sel==0){
			fflush(stdin);
			printf("Introduce la seleccion de futbol que quieras agregar: \n");
			fgets(sel[i].nombre_sel,N,stdin);
			cambio(sel[i].nombre_sel);

			sel[i].lleno_sel=1;
			aux=1;
		}
	}
	if(aux==0){
		printf("Ya no se pueden agregar Selecciones de futbol.\n");
	}

}

void anadejug(){//añadimos jugadores a las listas y su respectivos clubes de liga

	int i, aux, op;
	aux=0;

	for(i=0;i<3;i++){//aqui imprimimos las selecciones de futbol agregadas
		if(sel[i].lleno_sel==1){
			printf("(%i) %s.\n",i,sel[i].nombre_sel);
		}
	}
	scanf("%i",&op);//aqui elegimos que a que seleccion corresponde el jugadores

	for(i=0;i<11 && aux==0;i++){
		if(sel[op].jug[i].lleno_jug==0){
			printf("Introduce el nombre del jugador(Nombre y apellido): \n");
			fflush(stdin);
			fgets(sel[op].jug[i].nombre_jug,N,stdin);
			cambio(sel[op].jug[i].nombre_jug);

			printf("Introduce el nombre del club al que pertenece: \n");
			fflush(stdin);
			fgets(sel[op].jug[i].club,N,stdin);
			cambio(sel[op].jug[i].club);

			sel[op].jug[i].lleno_jug=1;
			aux=1;//con esto salimos del ciclo
		}
	}
}

void consulta(){//aquí preguntamos por algun futbolista o club de futbol

	int op, i, j, aux;
	char buscar[N];//Cadena de caracteres

	do{
		printf("Que quieres buscar? Nombre de un Jugador o un Club de Futbol\n");
		printf("(1) Nombre de un jugador profesional de futbol\n");
		printf("(2) Nombre de un club de futbol\n");
		scanf("%i",&op);

	}while(op<1 || op>2);
	if(op==1){
		printf("Introduce el nombre del jugador: \n");
		fflush(stdin);
		fgets(buscar,N,stdin);//intruducimos la palabra a comparar
		cambio(buscar);

		for(i=0;i<3;i++){
			aux=1;
			for(j=0;j<10;j++){
				aux=strcmp(buscar,sel[i].jug[j].nombre_jug);
				if(aux==0){
					printf("El jugador %s juega en la seleccion de %s.\n",buscar, sel[i].nombre_sel);
					printf("Su club de futbol es: %s\n",sel[i].jug[j].club);
				}
			}
		}
	}
	if(op==2){
		printf("Introduce del club: \n");
		fflush(stdin);
		fgets(buscar,N,stdin);//intruducimos la palabra a comparar
		cambio(buscar);

		for(i=0;i<3;i++){
			aux=1;
			for(j=0;j<10;j++){
				aux=strcmp(buscar,sel[i].jug[j].club);
				if(aux==0){
					printf("El jugador %s juega en la seleccion de %s.\n",sel[i].jug[j].nombre_jug,sel[i].nombre_sel);
					printf("Su club de futbol es: %s\n",sel[i].jug[j].club);
				}
			}
		}
	}
}
