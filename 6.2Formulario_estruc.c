//Crear un formulario de registro
#include<stdio.h>
#include<string.h>
#include<windows.h>

typedef struct{
	char nombre[50];
	char empleo[50];
	int edad;
}reg;//Las Estructuras se declaran fuera de de la funciion main para que sean de tipo Global

int main(){

	reg f1, f2;

	/*---------------------------Formulario 1----------------------------------*/
	printf("Introduce los valores para el formulario 1: \n");
	printf("Introduce tu nombre: ");
	fgets(f1.nombre,50,stdin);//fgets para los strings/cadena de caracteres

	printf("Introduce tu empleo: ");
	fflush(stdin);//limpias el buffer
	fgets(f1.empleo,50,stdin);//fgets(variable char,cantidad de char,entra teclado)

	printf("Introduce tu edad: ");
	fflush(stdin);
	scanf("%i",&f1.edad);//Este valor es tipo INT por lo que se scanf

	/*---------------------------Formulario 2----------------------------------*/
	printf("--------------------------------------------\n");
	printf("Introduce los valores para el formulario 2: \n");
	fflush(stdin);
	printf("Introduce tu nombre: ");
	fgets(f2.nombre,50,stdin);//fgets para los strings/cadena de caracteres

	printf("Introduce tu empleo: ");
	fflush(stdin);//limpias el buffer
	fgets(f2.empleo,50,stdin);//fgets(variable char,cantidad de char,entra teclado)

	printf("Introduce tu edad: ");
	fflush(stdin);
	scanf("%i",&f2.edad);

	system("cls");
	//printf("--------------------------------------------\n");

	int i, t;
	t=500;

	for(i=0;i<3;i++){
		printf("Cargando.\n");
		Sleep(t);
		system("cls");
		printf("Cargando..\n");
		Sleep(t);
		system("cls");
		printf("Cargando...\n");
		Sleep(t);
		system("cls");
	}
	/*---------------------------Resultados----------------------------------*/
	printf("Los Valores de F1 son: \n");
	printf("	-El nombre de F1 es: %s",f1.nombre);
	printf("	-El empleo de F1 es: %s ",f1.empleo);
	printf("	-La edad de F1 es: %i",f1.edad);

	printf("\n");
	printf("--------------------------------------------\n");
	printf("Los Valores de F2 son: \n");
	printf("	-El nombre de F2 es: %s",f2.nombre);
	printf("	-El empleo de F2 es: %s ",f2.empleo);
	printf("	-La edad de F2 es: %i",f2.edad);

	return 0;
}
