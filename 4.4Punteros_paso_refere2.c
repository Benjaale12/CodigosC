//4.4 Intercambia los valores de dos variables con un funcion.
//Punteros señalan y los & la dirección

#include <stdio.h>
//void cambio(int *a, int *b, int c);
void cambio();//escrito asi o como arriba da el mismo resultado

int main(){
	int x, y, z;

	x=5;
	y=10;
	z=20;

	printf("Valor de X: %i\nValor de Y: %i\n",x,y);
	printf("Valor de Z: %i\n",z);
	printf("-------------------\n" );
	cambio(&x,&y,z);//&x=> quiere decir "la direccion de x"
	//cambio(&x,&y,z);
	/*aux=y;
	y=x;
	x=aux;*/

	printf("Valor de X: %i\nValor de Y: %i\n",x,y);
	printf("Valor de Z: %i\n",z);
	return 0;
}
void cambio(int *a, int *b, int c){//a=&x y por tanto *a sera lo mismo que x.
	//X y *a comparten el mismo espacio de memoria
	//*a no tiene su propio espacio de memoria, lo comparte con X
	//*b no tiene su propio espacio de memoria, lo comparte con Y
	int aux;
	//a=y     b=x
	aux=*a;//aux=10
	*a=*b;//a=5
	*b=aux;//b=10
	//x=10    y=5
	//c=50;
	//printf("||%i||\n",*b);
	c=100;
	//No es necesario poner Return 0; no retorna nada
}
