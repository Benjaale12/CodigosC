//Hacer una matriz y leerla por pantalla
//Matriz es lo mismo que un arreglo pero de 2 o mas dimensiones

#include <stdio.h>
#include<time.h>
#include <windows.h>
void introduce();
void leer();

int main(){

	int matriz[5][5];

	introduce(matriz);
	leer(matriz);


	return 0;
}
void introduce(int matriz[][5]){//no es necesario poner un numero en ambos arrays
	int i, j;

	srand(time(NULL));//Es necesario usar <time.h> y <windows.h>

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			matriz[i][j]=rand()%10;//primera matriz[0][0];
		}
	}
}
void leer(int matriz[][5]){
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("|%i|",matriz[i][j]);
		}
		printf(" \n---------------\n");
	}
}
