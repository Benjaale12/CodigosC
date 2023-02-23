//Estructuras

#include <stdio.h>
#include <string.h>

typedef struct{
	int paginas;
	char nombre[50];
	float precio;
}libro;

int main(){
	int i;
	libro JT[10];

	for(i=0;i<10;i++){
		JT[i].precio=25+i;
		printf("El precio de la estructura %i es de %f.\n",i+1,JT[i].precio);
	}

	return 0;
}
