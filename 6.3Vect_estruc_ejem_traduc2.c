//Nombre y su caracteristica especial
#include<stdio.h>
#include<string.h>
#define N 50

typedef struct{
	char name[N];//=>data[i].name
	char caract[N];//=>data[i].caract
	int lleno;//=>data[i].lleno
}informador;

informador data[N];
void funcion_cambio(char c1[]);
void vacio();
void anadir_nombre_caract();
void buscar_info();
void buscar_caract_nombre();


int main(){
	int op;//opcion 1 o 2
	char volver;//S or N
	vacio();//convertimos todos su valores iniciales en 0
	do{
		do{
			printf("Elige que deseas hacer:\n");
			printf("(1) Anadir nombre y caracteristica.\n");
			printf("(2) Buscar info de alguien.\n");
			scanf("%i",&op);
		}while(op<1 || op>2);

		switch(op){
			case 1:{
				anadir_nombre_caract();//Añadiremos un nombre y su caracteristica
				break;
			}
			case 2:{
				buscar_info();//
				break;
			}
		}
		printf("Deseas si deseas realizar otra operacion: (S/N)\n");
		scanf("%c",&volver);
	}while(volver=='S' || volver=='s');

	return 0;
}

void vacio(){
	int i;
	for(i=0;i<N;i++){
		data[i].lleno=0;
	}
}

void anadir_nombre_caract(){
	int i, aux;

	aux=0;

	for(i=0;i<N && aux==0;i++){
		if(data[i].lleno==0){
			printf("Introduce el nombre que quieras agregar: \n");
			fflush(stdin);
			fgets(data[i].name,N,stdin);
			funcion_cambio(data[i].name);//Esto solucionará el problema del string por su terminacion en \n
			
			printf("Introduce la caracteristica de la persona: \n");
			fflush(stdin);
			fgets(data[i].caract,N,stdin);
			funcion_cambio(data[i].caract);
			data[i].lleno=1;
			aux=1;
		}
	}
}

void buscar_info(){
	int op;


	do{
		printf("Elige que deseas hacer:\n");
		printf("(1) Buscar un nombre para ver su caracteristica.\n");
		printf("(2) buscar una caracteristica para ver su nombre.\n");
		scanf("%i",&op);
	}while(op<1 || op>2);

	switch(op){
		case 1:{
			buscar_caract_nombre(op);
			break;
		}
		case 2:{
			buscar_caract_nombre(op);
			break;
		}
	}
}

void buscar_caract_nombre(int op){
	int i, j, temp;
	char aux[N];

	temp=0;
	if(op==1){
		printf("Introduce el nombre de la persona: ");
	}
	else{
		printf("Introduce la caracteristica de la persona: ");
	}


	fflush(stdin);
	fgets(aux,N,stdin);
	funcion_cambio(aux);

	/*(1) Buscar un nombre para ver su caracteristica
	  (2) buscar una caracteristica para ver su nombre.*/

	if(op==1){
		for(i=0;i<N && temp==0;i++){
			j=strcmp(aux,data[i].name);
			if(j==0){
				printf("La caracteristica principal de %s es ser terriblemente %s.\n",data[i].name,data[i].caract);
				temp=1;
			}
		}
	}
	else{
		for(i=0;i<N && temp==0;i++){
			j=strcmp(aux,data[i].caract);
			if(j==0){
				printf("La persona que es terriblemente %s se llama %s.\n",data[i].caract,data[i].name);
				temp=1;
			}
		}
	}
}

void funcion_cambio(char c1[N]){
	int i;

	for(i=0;i<N;i++){
		if(c1[i]=='\n'){
			c1[i]='\0';
		}
	}
}
