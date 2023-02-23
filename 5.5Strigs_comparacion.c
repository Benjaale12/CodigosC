//Introducir una frase como cade de caracteres(strings)
#include<stdio.h>

int main(){

	char vector1[13];//ej: hola(\0)   son 4 palabras mas 2 de(\0), los espacios tambien cuentan
	printf("Introduce una frase: ");
	scanf("%s",&vector1);//scanf termina de captar hasta que haya un espacio
	printf("%s\n\n",vector1);
	/*--------------------------------------*/
	printf("---------------------------------\n");

	char vector2[13];
	printf("Introduce una frase: ");
	fflush(stdin);
	gets(vector2);//gets no repeta el limite de memoria por lo que sobreescribe info en espacio de la memoria no asignadas
	//Es muy peligroso puede provocar una daño a otra aplicacion que esté corriendo en el momento
	printf("%s\n\n",vector2);
	/*---------------------------------------------*/
	printf("---------------------------------\n");

	char vector3[13];
	printf("Introduce una frase: ");
	fflush(stdin);
	fgets(vector3,13,stdin);//fgets(array,cantidad de elementos,standar input)
	//Standar input=teclado
	//fgets= Hola que tal\n
	printf("%s\n\n",vector3);//Los espacios tambien cuentan

	return 0;
}
