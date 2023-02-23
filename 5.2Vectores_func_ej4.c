//Ejercicio: programa que lea 10 enteros y vea cuantos elementos iguales hay
//ej:{2,2,2,4,4,6,8,8,8,}=> 3 elementos 2, 2 elementos 4, 1 elemento 6 y 3 elementos 8.
#include <stdio.h>
void ordenar();
void imprimir();
void conteo();

int main(){

	int v[10]={2,2,2,3,3,4,4,4,7,7};
             //0|1|2|3|4|5|6|7|8|9|
	ordenar(v);
	imprimir(v);
	printf("\n------------------------------------------\n");
	conteo(v);

	return 0;
}
void ordenar(int a[]){
	int i, j, aux;

	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(a[j]>a[i]){
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}
		}
	}
}
void imprimir(int b[]){
	int i;
	for(i=0;i<10;i++){
		printf("|%i|",b[i]);
	}
}
void conteo(int c[]){
	int i, j;
	int contador;
	contador=1;
	for(j=0;j<10;j++){
		if(c[j]==c[j+1]){
			contador=contador+1;
		}
		else{
			printf("%i se repite %i veces\n",c[j],contador);
			contador=1;
		}
	}
}
