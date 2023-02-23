//4.3 Hace con funciones de tipo VOID el factorial de un numero.7

//esto lo había hecho antes pero bue
//VOID significa vacío por lo que no retorna nada

#include <stdio.h>
#include <windows.h>

void factorial();

int main(){
	factorial();
}
void factorial(){
	int x,i,t;
	int mult;
	printf("FACTORIALES\n\n");
	printf("Introduce un valor:\n");
	scanf("%i",&x);
	printf("\n%i!=",x);

	mult=1;
	t=10;
	for(i=1;i<=x;i++){
		mult=mult*i;
		if(i==x){
			printf("%i",i);
		}
		else{
			printf("%ix",i);
		}
		Sleep(t);
	}
	printf("=%i\n",mult);
}
