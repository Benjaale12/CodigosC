//5.2 Ordenar un vector de 10 enteros de menor a mayor mediante un funcion
#include <stdio.h>
void ordenar();
void imprimir();

int main(){
	int v[10]={1,54,76,4,8,6654,49,78,45,99};
	imprimir(v);
	ordenar(v);
	imprimir(v);
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

void imprimir(int b[]){//a es x
	int i;

	for(i=0;i<10;i++){
		printf("|%i|",b[i]);
	}
	printf("\n\n");
}
