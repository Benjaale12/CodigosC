//Realizar un traductor de ingles a español y viceversa con un vector de Estructuras
#include<stdio.h>
#include<string.h>
#define N 50

typedef struct{
	char eng[N];
	char esp[N];
	int lleno;//
}traductor;

traductor trad[N];
void funcion_cambio(char c1[]);
void vacio();
void anadir();
void traducir();
void tradu(int op);


int main(){
	int op;//opcion 1 o 2
	char key;
	vacio();//convertimos todos su valores iniciales en 0
	do{
		do{
			printf("Elige que deseas hacer:\n");
			printf("(1) Anadir palabras al traductor.\n");
			printf("(2) Buscar traduccion de una palabra.\n");
			scanf("%i",&op);
		}while(op<1 || op>2);

		switch(op){
			case 1:{
				anadir();
				break;
			}
			case 2:{
				traducir();
				break;
			}
		}
		printf("Deseas si deseas realizar otra operacion: (S/N)\n");
		scanf("%c",&key);
	}while(key=='S' || key=='s');


	return 0;
}
void vacio(){
	int i;
	for(i=0;i<N;i++){
		trad[i].lleno=0;//si se añade informacion esto dejará de ser 0
	}
}
void anadir(){
	int i, aux;

	aux=0;

	for(i=0;i<N && aux==0;i++){
		if(trad[i].lleno==0){
			printf("Introduce la palabras en Ingles: \n");
			fflush(stdin);
			fgets(trad[i].eng,N,stdin);
			funcion_cambio(trad[i].eng);//Esto solucionará el problema del string por su terminacion en \n
			printf("Introduce la palabra en Español: \n");
			fflush(stdin);
			fgets(trad[i].esp,N,stdin);
			funcion_cambio(trad[i].esp);
			trad[i].lleno=1;
			aux=1;
		}
	}
}

void traducir(){
	int op;


	do{
		printf("Elige que deseas hacer:\n");
		printf("(1) Traducir de Ingles a Español.\n");
		printf("(2) Traducir de Español a Ingles.\n");
		scanf("%i",&op);
	}while(op<1 || op>2);

	switch(op){
		case 1:{
			tradu(op);
			break;
		}
		case 2:{
			tradu(op);
			break;
		}
	}
}

void tradu(int op){
	int i, j, temp;
	char aux[N];

	temp=0;

	printf("Introduce la palabra que deseas traducir: ");
	fflush(stdin);
	fgets(aux,N,stdin);
	funcion_cambio(aux);

	if(op==1){
		for(i=0;i<N && temp==0;i++){
			j=strcmp(aux,trad[i].eng);
			if(j==0){
				printf("La traduccion de %s es %s.\n",trad[i].eng,trad[i].esp);
				temp=1;
			}
		}
	}
	else{
		for(i=0;i<N && temp==0;i++){
			j=strcmp(aux,trad[i].esp);
			if(j==0){
				printf("La traduccion de %s es %s.\n",trad[i].esp,trad[i].eng);
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
