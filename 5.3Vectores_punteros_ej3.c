//Calcular las probabilidades de que salga cada uno de los numeros de un dado
//con un vector usando punteros.
//Calcular con 10.000 iteraciones.

#include <stdio.h>
#include <time.h>
#include <windows.h>//libreria para usar srand(time(NULL))
void tiradas();
void imprimir();
int main(){
	int vec[6]={0,0,0,0,0,0};
	tiradas(vec);
	imprimir(vec);

}
void tiradas(int *vec){
	int i,aux;
	srand(time(NULL));

	for(i=0;i<10000;i++){
		aux=rand()%6;//
		if(aux==0){
			*(vec+aux)=*(vec+aux)+1;
		}
		if(aux==1){
			*(vec+aux)=*(vec+aux)+1;
		}
		if(aux==2){
			*(vec+aux)=*(vec+aux)+1;
		}
		if(aux==3){
			*(vec+aux)=*(vec+aux)+1;
		}
		if(aux==4){
			*(vec+aux)=*(vec+aux)+1;
		}
		if(aux==5){
			*(vec+aux)=*(vec+aux)+1;
		}
	}
}
void imprimir(int *vec){
	int i;
	float x;
	for(i=0;i<6;i++){
		x=(*(vec+i))/100.;
		//printf("El numero %i del dado salio %i veces.\n",i+1,*(vec+i));
		printf("El numero %i del dado salio %0.2f Porciento.\n",i+1,x);
	}
}
