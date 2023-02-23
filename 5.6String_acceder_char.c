//Acceder a un char de un string y modificarlo
//cambiar el "\n" por un "\0"

#include <stdio.h>
#include <string.h>
#include<windows.h>
#include<time.h>

void cambio(char c1[]);
void cambio_2(char name[]);

int main(){
	char c1[10];//un string de 10 caracteres

	printf("Introduzca una frase: ");
	fgets(c1,10,stdin);//fgets es como scanf// el ultimo espacio es "\n"

	cambio(c1);
	printf("%s",c1);//%s=strings
	system("pause");
	system("cls");

	printf("\n-----------------------------------------------\n");
	char name[8];
	int i;
	int time=500;
/*--------------------------Trolleo al nico--------------------*/

	printf("Escribe un nombre cualquiera: \n");
	fflush(stdin);//esto limpia el buffer de la entrada
	fgets(name,8,stdin);
	for(i=0;i<3;i++){
		system("cls");
		printf("cargando.\n");
		Sleep(time);
		system("cls");
		printf("cargando..\n");
		Sleep(time);
		system("cls");
		printf("cargando...\n");
		Sleep(time);
		system("cls");
	}
	cambio_2(name);
	printf("You are so fucking %s",name);




	return 0;
}

void cambio(char c1[]){
	int i;

	for(i=0;i<10;i++){
		if(c1[i]=='\n'){
			c1[i]='\0';
		}
	}
}
void cambio_2(char name[]){
	int i;

	for(i=0;i<8;i++){
		if(name[i]=='i'){
			name[i]='u';
		}
	}
}
