//Nombre y su caracteristica especial
#include<stdio.h>
#include<string.h>
#define N 50

typedef struct{
	char name[N];              //=>data[i].name       //nombre y apellido
	char direccion[N];         //=>data[i].direccion
	int numero_direccion;   //=>data[i].numero_direccion
	int lleno;                 //=>data[i].lleno
}informador;

informador data[N];
void funcion_cambio(char c1[]);
void anadir_nombre_info();
void buscar_info();
void buscar_name_direccion_n();

void vacio();


int main(){
	int op;//opcion 1 o 2
	char volver;//S or N
	vacio();//convertimos todos su valores iniciales en 0
	do{
		do{
			printf("Elige que deseas hacer:\n");
			printf("(1) Anadir Informacion de alguien.\n");
			printf("(2) Buscar info de alguien.\n");
			scanf("%i",&op);
		}while(op<1 || op>2);

		switch(op){
			case 1:{
				anadir_nombre_info();//Añadiremos un nombre y su caracteristica
				break;
			}
			case 2:{
				buscar_info();//
				break;
			}
		}
		printf("Deseas si deseas realizar otra operacion: (S/N)\n");
		fflush(stdin);
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

void anadir_nombre_info(){
	int i, aux, aux_2;

	aux=0;

	for(i=0;i<N && aux==0;i++){
		if(data[i].lleno==0){//revisa que espacio de de la estructura está vacía
			printf("Introduce el nombre y apellido de la persona que quieras agregar a la base de datos: \n");
			fflush(stdin);
			fgets(data[i].name,N,stdin);
			funcion_cambio(data[i].name);//Esto solucionará el problema del string por su terminacion en \n

			printf("Introduce el pasaje de la persona que quieras agregar: \n");
			fflush(stdin);
			fgets(data[i].direccion,N,stdin);
			funcion_cambio(data[i].direccion);

			printf("Introduce el numero de la casa de la persona que está agregando: \n");
			fflush(stdin);
			//fgets(data[i].numero_direccion,N,stdin);
			//scanf("%i",&data[i].numero_direccion);
			scanf("%i",&aux_2);
			data[i].numero_direccion=aux_2;

			data[i].lleno=1;
			aux=1;
		}
	}
}

void buscar_info(){
	//en esta funcion eliges que tipo de busqueda quieres(nombre,pasaje o numero de la casa)
	int op;


	do{
		printf("Elige que deseas hacer:\n");
		printf("(1) Buscar un nombre para ver su informacion personal.\n");
		printf("(2) Buscar su pasaje para saber el numero de casa y quien vive ahí.\n");
		printf("(3) Buscar su numero de hogar para saber su demás informacion.\n");
		scanf("%i",&op);
	}while(op<1 || op>3);

	switch(op){
		case 1:{
			buscar_name_direccion_n(op);
			break;
		}
		case 2:{
			buscar_name_direccion_n(op);
			break;
		}
		case 3:{
			buscar_name_direccion_n(op);
			break;
		}
	}
}

void buscar_name_direccion_n(int op){
	int i, j, temp;
	char aux[N];//aux[N] es una variable de tipo char que puede contener hasta N(50) caracteres osea es una cadena de caracteres
	//aux= es la informacion que escribimos para hacer la busqueda(nombre/direccion)
	int aux_2;//aux uno es lo mismo que aux pero solo que es unicamente para usarlo con "numero_direccion", debido a que es de tipo entero(int)

	temp=0;
	if(op==1){
		printf("Introduce el nombre de la persona: ");
		fflush(stdin);
		fgets(aux,N,stdin);
		funcion_cambio(aux);
	}
	else if(op==2){
		printf("Introduce el pasaje de la persona: ");
		fflush(stdin);
		fgets(aux,N,stdin);
		funcion_cambio(aux);
	}
	else if(op==3){
		printf("Introduce el numero de la casa: ");
		fflush(stdin);
		/*fgets(aux,N,stdin);
		funcion_cambio(aux);*/
		scanf("%i",aux_2);

	}



	/*(1) Buscar un nombre para ver su caracteristica
	  (2) buscar una caracteristica para ver su nombre.*/

	if(op==1){
		for(i=0;i<N && temp==0;i++){
			j=strcmp(aux,data[i].name);//aqui compara el dato escrito por ti con los datos de la memoria para ver si hay alguna coincidencia, si se encuentra
			if(j==0){
				//printf("La caracteristica principal de %s es ser terriblemente %s.\n",data[i].name,data[i].direccion);
				printf("Informacion completa: \n");
				printf("-Nombre: %s\n",data[i].name);
				printf("-Direccion: %s #%i\n",data[i].direccion,data[i].numero_direccion);
				temp=1;
			}
			else{
				printf("No se encontro ninguna coincidencia.\n");
			}
		}
	}
	else if(op==2){
		for(i=0;i<N && temp==0;i++){
			j=strcmp(aux,data[i].direccion);
			if(j==0){
				//printf("La persona que es terriblemente %s se llama %s.\n",data[i].direccion,data[i].name);
				printf("Informacion completa: \n");
				printf("-Nombre: %s\n",data[i].name);
				printf("-Direccion: %s #%i\n",data[i].direccion,data[i].numero_direccion);
				temp=1;
			}
			else{
				printf("No se encontro ninguna coincidencia.\n");
			}
		}
	}
	/*else if(op==3){//aqui es int
		for(i=0;i<N && temp==0;i++){
			j=strcmp(aux_2,data[i].numero_direccion);
			if(j==0){
				//printf("La persona que es terriblemente %s se llama %s.\n",data[i].direccion,data[i].name);
				printf("Informacion completa: \n");
				printf("-Nombre: %s\n",data[i].name);
				printf("-Dirección: %s #%i\n",data[i].direccion,data[i].numero_direccion);
				temp=1;
			}
			else{
				printf("No se encontro ninguna coincidencia.\n");
			}
		}
	}*/
	else if(op==3){
		for(i=0;i<N && temp==0;i++){
			if(aux_2==data[i].numero_direccion){
				printf("Informacion completa: \n");
				printf("-Nombre: %s\n",data[i].name);
				printf("-Direccion: %s #%i\n",data[i].direccion,data[i].numero_direccion);
				temp=1;
			}
			else{
				printf("No se encontro ninguna coincidencia.\n");
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
