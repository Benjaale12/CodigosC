//Hacer un programa que compare dos matrices

#include <stdio.h>
#include <windows.h>
#include <time.h>

void introduce();
void imprimir();
void compara();

int main(){
	int m1[2][2];
	int m2[2][2];

	introduce(m1);
	introduce(m2);

	imprimir(m1);
	printf("\n-----------------------------\n\n");
	imprimir(m2);

	compara(m1,m2);

	return 0;
}
void introduce(int m[][2]){
	int i, j;

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Introduce una valor para (%i,%i):",i+1,j+1);
			scanf("%i",&m[i][j]);
			printf("\n");
			system("cls");//Necesario time.h y windows.h
		}
	}
}
void imprimir(int m[][2]){
	int i, j;

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("|%i|",m[i][j]);
		}
		printf("\n");
		//printf("------\n");
	}
}
void compara(int a[][2], int b[][2]){
	int i, j;
	int contador;
	contador=0;

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(a[i][j]!=b[i][j]){
				contador=contador+1;
			}
		}
	}

	if(contador==0){
		printf("Las matrices son iguales!!\n");
	}
	if(contador!=0){
		printf("Las matrices son distintas\n");
	}
}
