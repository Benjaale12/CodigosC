//5.1 Darle a un valor de 10 enteros y leerlos despues.
#include <stdio.h>
#include <windows.h>

int main(){
	int i,t;
	int v[]={3,5,8,7,9};//Los vectores empiezan desde el 0
	//Posiciones= 0, 1, 2, 3, 4
	printf("El valor de la posicion 0 es: %i\n",v[0]);
	t=100;

	for(i=0;i<=4;i++){
		printf("|%i|",v[i]);
		Sleep(t);
	}
	return 0;
}
