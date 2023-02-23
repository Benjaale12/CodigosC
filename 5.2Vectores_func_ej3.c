//5.2 Ordenar un vector de 10 enteros de mayor a menor mediante un funcion
#include <stdio.h>
void ordenar();
void imprimir();
void imprimir2();

int main(){
	int v[10]={98,88,34,53,76,23,42,65,22,36};

	imprimir(v);
	printf("\n------------------------------------------\n");
	ordenar(v);
	imprimir(v);
	printf("\n------------------------------------------\n");
	imprimir2(v);

	return 0;
}
void ordenar(int a[]){
	int i, j, aux;

	for(i=0;i<10;i++){
		for(j=i;j<10;j++){
			if(a[i]>a[j]){
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}
		}
	}
}
void imprimir(int b[]){//se imprime normal de Menor a mayor
	int i;
	for(i=0;i<10;i++){
		printf("|%i|",b[i]);
	}
}
void imprimir2(int c[]){//se imprime normal de Mayor a menor
	int i;
	for(i=9;i>=0;i--){
		printf("|%i|",c[i]);
	}
}
