//1.6 Ordenamiento por Metodo de la burbuja

//Intercambiar los valores de dos numeros enteros introducidos por teclado.

#include <stdio.h>

int main(){
  int x,y,aux;

  printf("El valor que le daras a x sera:");
  scanf("%i",&x);

  printf("El valor que le daras a y sera:");
  scanf("%i",&y);

  printf("El valor de x es: %i.\n",x);
  printf("El valor de y es: %i.\n",y);

  printf("---------------------------------------------------------------\n");
  printf("En este punto los valores de x e y fueron intercambiados\n");
  printf("---------------------------------------------------------------\n");

  aux=x;
  x=y;
  y=aux;

  printf("El valor de x es: %i.\n",x);
  printf("El valor de y es: %i.\n",y);


  return 0;
}
