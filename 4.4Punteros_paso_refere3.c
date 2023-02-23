//4.4 Reciba un funcion que reciba como entrada las cordenadas cartesianas de un
//punto del plano(x,y) y devuelva el cuadrante en el que se encuentra el
//punto (1,2,3,4), debe devolver 0 si se encuentra en un eje.
//X e Y se ingresan por teclado
#include <stdio.h>
void imprimir();
void ingresar();
void cuadrante();

int main(){

	int x, y, i;


	for(i=0;i<4;i++){
		printf("Introduce un valor para X: ");
		scanf("%i",&x);
		printf("Introduce un valor para Y: ");
		scanf("%i",&y);


		imprimir(&x,&y);

		cuadrante(&x,&y);
		printf("---------------------------\n");
	}

	return 0;
}
void ingresar(int *a, int *b){

	printf("Intruduce un valor para X: ");
	scanf("\n%i",*a);

	printf("\nIntruduce un valor para Y: ");
	scanf("\n%i",*b);

}
void imprimir(int *a, int *b){
	printf("El valor de X= %i \n",*a);
	printf("El valor de Y= %i \n",*b);
}
void cuadrante(int *a, int *b){
	//a=X    b=Y
	if(*a>0 && *b>0){//PRIMER CUADRANTE
		printf("El punto(%i,%i) pertenece al PRIMER CUADRANTE.\n",*a,*b);
	}
	if(*a<0 && *b>0){//SEGUNDO CUADRANTE
		printf("El punto(%i,%i) pertence al SEGUNDO CUADRANTE.\n",*a,*b);
	}
	if(*a<0 && *b<0){//TERCER CUADRANTE
		printf("El punto(%i,%i)pertenece al TERCER CUADRANTE.\n",*a,*b);
	}
	if(*a>0 && *b<0){//CUARTO CUADRANTE
		printf("El punto(%i,%i)pertenece al CUARTO CUADRANTE.\n",*a,*b);
	}
	if(*a==0 || *b==0 ){//NINGUN CUADRANTE
		printf("El punto(%i,%i) NO PERTENECE A NINGUN CUADRANTE.\n",*a,*b);
	}
}
