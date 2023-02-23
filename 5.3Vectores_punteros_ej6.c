/*Realiza un programa que escriba por pantalla el máximo de los elementos de un vector.
Para ello se deben usar las funciones cuyos prototipos se describen a continuación y utilizar
aritmética de punteros para acceder a los elementos del vector.
-void leer_vector(int *vec)
-void maximo(int *vec, int *max)*/
#include <stdio.h>
void leer_vector();
//void maximo();//se determina el valor maximo del vector y sus valores

int main(){
	int max;
	int vec[max]={99,3343,783,863,7643,7436};

	leer_vector(vec,&max);
	//maximo(int *vec, int *max);

	return 0;
}
void leer_vector(int *vec, int *max){
	int i, contador,x;

	x=1;
	for(i=0;i<=x;i++){
		printf("|%i|\n",*(vec+i));
		x++;
	}
}
//no entendi el enunciado por lo que decidí no hacerlo
