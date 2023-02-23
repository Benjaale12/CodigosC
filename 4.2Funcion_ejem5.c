//4.2 Comprobar si dos numeros diferentes son primos con una funcion CON RETORNO

#include <stdio.h>
int primo();


int main(){
	int x,y;
	int prim1, prim2;

	printf("Introduce un Valor para X:\n");
	scanf("%i",&x);
	prim1=primo(x);
	if(prim1==2){
		printf("%i es primo\n",x);
	}
	else{
		printf("%i no es primo\n",x);
	}


	printf("\nIntroduce un Valor para Y:\n");
	scanf("%i",&y);
	prim2=primo(y);
	if(prim2==2){
		printf("%i es primo\n",y);
	}
	else{
		printf("%i no es primo\n",y);
	}

	return 0;
}

int primo(int a){
	//"a" no se declara porque el int a ya va dentro del parentesis
	int i;
	int aux;

	aux=0;
	i=1;
	for(i;i<=a;i++){
		if(a%i==0){
			aux=aux+1;
		}
	}
	return aux;
}
