/*Escribe un programa que normalice los 20 números reales que están almacenados en un
vector estadisticas. Para llevar a cabo esta normalización, se debe dividir cada número por
el máximo valor del vector de forma que los valores resultantes estén comprendidos entre 0
y 1. Realiza una versión devolviendo el resultado en el mismo vector y otra que construya
un nuevo vector normalizado*/

#include <stdio.h>

void imprimir();
void ordenar();
void division();

int main(){
	int vec[20]={33,324,44,23,67,75,34,75,33,77,4,46,6,64,43,345,33,56,43,12};
	int vec_mayor;
	printf("Numeros inicio: ");
	imprimir(vec);
	ordenar(vec);
	imprimir(vec);//imprimir ordenados
	vec_mayor=*(vec+19);//vec+0, vec+1...vec+19.
	printf("\nEl vector mayor es: %i\n",vec_mayor);
	division(vec,&vec_mayor);

	return 0;
}
void imprimir(int *vec){
	int i,j;

	for(i=0;i<20;i++){
		printf("|%i|",*(vec+i));
	}
}
void ordenar(int *vec){
	//De mayor a menor
	int i, j, aux;
	printf("\nNumeros ordenados(Menor a mayor): ");

	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			if(*(vec+i)<*(vec+j)){
				aux=*(vec+j);
				*(vec+j)=*(vec+i);
				*(vec+i)=aux;
			}
		}
	}
}
//a es el vec_mayor
void division(int *vec, int *a){
	int i;
	float x, div;
	div=*a;
	printf("RESULTADO DIVISION: \n");

	for(i=0;i<20;i++){
		x=*(vec+i)/div;
		printf("\nEl vector %i es: %f",i+1,x);
	}

}
