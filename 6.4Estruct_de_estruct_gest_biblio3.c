#include<stdio.h>
#include<string.h>
#define N 50

void vacio();
void cambio(char palabra[N]);
void agregar_info();
void consultar_info();


typedef struct{
	int matematicas;
	int lenguaje;
	int ciencias;
	int lleno_notas;
}materias;

typedef struct{
	char nombre_al[N];
	materias mat[1];//1 nota por cada materia
	int lleno_al;
}alumnos;

alumnos al[20];//hasta 20 alumnos


int main(){
	int op;
	char op_2;

	vacio();//con esto declaramos int lleno=0;

	do{
		do{
			printf("---Notas del curso--- \n");
			printf("(1)Agregar alumno y sus notas.\n");
			printf("(2)Consultar por las notas de un alumno.\n");
			scanf("%i",&op);
			//printf("(3)\n");
		}while(op<1 || op>3);

		if(op==1){
			agregar_info();
		}
		if(op==2){
			consultar_info();
		}

		printf("Desea hacer otra accion?(S/N): \n");
		fflush(stdin);
		scanf("%c",&op_2);
	}while(op_2=='S' || op_2=='s');

	return 0;
}

void vacio(){
	int i, j;

	for(i=0;i<10;i++){
		al[i].lleno_al=0;
		for(j=0;j<1;j++){
			al[i].mat[j].lleno_notas=0;
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

void agregar_info(){
	int i, aux;
	aux=0;

	for(i=0;i<20 &&aux==0;i++){//20 por la cantidad max de alumnos
		if(al[i].lleno_al==0){
			fflush(stdin);
			printf("Escribe el nombre del alumno(nombre y apellido): \n");
			fgets(al[i].nombre_al,N,stdin);
			cambio(al[i].nombre_al);
			printf("Escribe las notas(1-7) de %s: \n",al[i].nombre_al);
			printf("Matematicas: \n");
			scanf("%i",&al[i].mat[0].matematicas);
			printf("Lenguaje: \n");
			scanf("%i",&al[i].mat[0].lenguaje);
			printf("Ciencias: \n");
			scanf("%i",&al[i].mat[0].ciencias);

			al[i].lleno_al=1;
			al[i].mat[0].lleno_notas=1;
			aux=1;
		}
	}
}

void consultar_info(){
	int op, op_2, i, j, aux;
	char nombre_busqueda[N];
	do{
		printf("Elige el tipo de consulta que quieras hacer: \n");
		printf("(1)Consultar las notas de una persona.\n");
		printf("(2)Consultar las notas de todos los alumnos en una materia\n");
		scanf("%i",&op);

	}while(op<1 || op>2);
	if(op==1){
		printf("Introduce el nombre del alumno: ");
		fflush(stdin);
		fgets(nombre_busqueda,N,stdin);
		cambio(nombre_busqueda);

		aux=1;
		for(i=0;i<20;i++){
			aux=strcmp(nombre_busqueda,al[i].nombre_al);
			if(aux==0){
				printf("Las notas de %c son las siguientes: \n",al[i].nombre_al);
				printf("-Matematicas: %i.\n",al[i].mat[0].matematicas);
				printf("-Lenguaje: %i.\n",al[i].mat[0].lenguaje);
				printf("-Ciencias: %i.\n",al[i].mat[0].ciencias);
			}
		}

	}
	if(op==2){
		printf("Que materia deseas revisar su contenido?\n");
		printf("(1)Matematicas.\n");
		printf("(2)Lenguaje.\n");
		printf("(3)Ciencias.\n");
		scanf("%i",&op_2);

		if(op_2==1){
			printf("Promedio de matematicas: \n");
			for(i=0;i<20;i++){
				if(al[i].lleno_al==1){
					printf("El alumno %s tiene un %i de promedio.\n",al[i].nombre_al,al[i].mat[0].matematicas);
				}
			}
		}
		if(op_2==2){
			printf("Promedio de Lenguaje: \n");
			for(i=0;i<20;i++){
				if(al[i].lleno_al==1){
					printf("El alumno %s tiene un %i de promedio.\n",al[i].nombre_al,al[i].mat[0].lenguaje);
				}
			}
		}
		if(op_2==3){
			printf("Promedio de Ciencias: \n");
			for(i=0;i<20;i++){
				if(al[i].lleno_al==1){
					printf("El alumno %s tiene un %i de promedio.\n",al[i].nombre_al,al[i].mat[0].ciencias);
				}
			}
		}
	}
}
