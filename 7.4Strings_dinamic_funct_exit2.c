//aqui con Realloc no se pudo asignar memoria
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cambio(char palabra[50]);


typedef struct{
	//estos son strings estaticos
	/*char nombre[50];
	char autor[50];*/

	//estos son strings dinamicos
	char *nombre;//strings con punteros que no tienen nada
	char *autor;
}libro;

int main(){

	char aux[50];
	libro JDT;
	printf("Introduce un nombre para el libro: ");
	fflush(stdin);
	fgets(aux,50,stdin);
	cambio(aux);

	//JDT.nombre=(char*)malloc(N*sizeof(char));
	JDT.nombre=(char*)realloc(JDT.nombre,(strlen(aux)+1)*sizeof(char));//Con esto resevamos el espacio necesario
	//al final es (+1) debido a que no cuenta el espacio con '\0'
	if(JDT.nombre==NULL){
		printf("No sea ha podido reservar memoria.\n");
		exit(1);//con esto no hacemos un else
	}
	strcpy(JDT.nombre,aux);//Esto lo que hace es copiar el contenido de una string a otro strings
	//strcpy(destino del copiado, );
	//printf("%s\n",JDT.nombre);
//------------------------------------------------------------------------------
	printf("Introduce un nombre para el Autor: ");
	fflush(stdin);
	fgets(aux,50,stdin);
	cambio(aux);
	JDT.autor=(char*)malloc((strlen(aux)+1)*sizeof(char)); //si se cambia malloc por realloc esto iria por exit(1)
	if(JDT.autor==NULL){
		printf("No se ha podido asignar memporia.\n");
		exit(1);
	}
	strcpy(JDT.autor,aux);
	printf("Nombre libro: %s\n",JDT.nombre);
	printf("Nombre autor: %s\n",JDT.autor);

	return 0;
}
void cambio(char palabra[50]){
	int i, aux=0;//aux es un auxiliar para salir del ciclo

	for(i=0;i<50 && aux==0;i++){
		if(palabra[i]=='\n'){
			palabra[i]='\0';
			aux=1;
		}
	}
}
