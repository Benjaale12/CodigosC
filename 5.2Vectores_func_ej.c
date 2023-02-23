//5.2 Introducir elementos a un vector con una funciom
#include <stdio.h>

void fun(int a[]);//en este modulo introducimos valores a los vectores(2)
void imprimir(int x[]);//Imprime por pantalla los numeros introducidos
//void fun();
//void imprimir();

//Con los vectores no es necesario usar punteros, siempre hay paso de parametros por referencia

int main(){

	int v[2];

	fun(v);
	printf("--------------------------------------\n");
	imprimir(v);

	return 0;
}
//El primer valor de un vector es el 0
void fun(int a[]){//(int v[])
	int i;

	for(i=0;i<2;i++){
		if(i==0 || i==3){
			printf("Introduce el %ier valor para el vector: ",i+1);
			scanf("%i",&a[i]);
		}
		else{
			printf("Introduce el %io valor para el vector: ",i+1);
			scanf("%i",&a[i]);
		}
	}
}
void imprimir(int x[]){//(int v[])
	int i;

	for(i=0;i<2;i++){
		printf("|%i|",x[i]);
	}
	printf("\n\n");
}
