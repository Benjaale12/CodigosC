//4.2 Comprobar si dos numeros diferentes son primos con una funcion
#include <stdio.h>
#include <windows.h>

int primo();

int main(){

	int x,y;
	int pri1, pri2;

	printf("COMPROBASION DE NUMEROS PRIMOS.\n");

	printf("Introduce un valor para X:\n");
	scanf("%i",&x);
	/*pri1=*/primo(x);

	printf("Introduce un valor para Y:\n");
	scanf("%i",&y);
	primo(y);

	return 0;
}

int primo(int a){
	int i, aux, contador;
	contador=0;
	i=1;
	for(i;i<=a;i++){
		if(a%i==0){
			contador=contador+1;
		}
	}
	if(contador==2){
		printf("El numero: %i es PRIMO\n",a);
	}
	else{
		printf("El numero: %i  NO ES PRIMO\n",a);
	}
	return 0;
}
