//Curso 1.4
#include <stdio.h>
#define PI 3.1416


int main(){
  float x;
  int y;
  float y2;
  x=PI;

  //printf("El valor de x: %f\n",x);
  printf("Introduce un valor para y(numero entero): ");
  scanf("%i",&y );//el %i es porque se declaró leer Y como un entero, la variable en scanf siempre va acompañada de "&" antes de la letra o nombre
  printf("El valor de y es: %i.\n",y);

  printf("---------------------------------------------\n");

  printf("Introduce un valor para y2: \n");
  printf("Puedes escribirlo con decimales(solo hasta 6 decimales)\n");
  scanf("%f",&y2 );//el %f es porque se declaró leer Y como un entero, la variable en scanf siempre va acompañada de "&" antes de la letra o nombre
  printf("El valor de y es: %f.\n",y2);

  printf("---------------------------------------------\n");

  x=x*y;

  printf("Y el nuevo valor de x es: %f.\n",x);


  return 0;
}
