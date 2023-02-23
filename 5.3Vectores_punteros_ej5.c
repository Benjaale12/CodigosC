//Calcular las probabilidades de que salga cada uno de los numeros de un dado
//con un vector usando punteros.
//Calcular con 10.000 iteraciones.
//5.3 dado sin punteros

#include <stdio.h>
#include <time.h>
#include <windows.h>//libreria para usar srand(time(NULL))
void sorteo();
void imprimir();

int main(){

	int vec[]={0,0,0,0,0,0};

	sorteo(vec);
	imprimir(vec);
	return 0;
}
void sorteo(int vec[]){
	int i, aux;
	srand (time(NULL));

	for(i=0;i<10000;i++){

		aux=rand()%6;//%6 se le agrega y significa que puede salir un numero random desde el 0 hasta el 5.
		//Numeros desde el 0 hasta el 5.
		switch(aux){
			case 0:{
				vec[aux]=vec[aux]+1;
				break;
			}
			case 1:{
				vec[aux]=vec[aux]+1;
				break;
			}
			case 2:{
				vec[aux]=vec[aux]+1;
				break;
			}
			case 3:{
				vec[aux]=vec[aux]+1;
				break;
			}
			case 4:{
				vec[aux]=vec[aux]+1;
				break;
			}
			case 5:{
				vec[aux]=vec[aux]+1;
				break;
			}
		}
	}
}
void imprimir(int vec[]){
	int i;
	float x;

	for(i=0;i<6;i++){
		x=(vec[i]*100)/10000.;//El resultado de esto será entero y para eso ponemos un punto para que dé un numero con decimales
		printf("La probalididad de que el numero %i salga es de: %f%.\n",i+1,x);//cuando se imprime se pone el puntero
	}
}
