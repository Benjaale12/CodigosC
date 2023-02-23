//1.5 Asignaciones y operaciones básicas.

#include <stdio.h>
#include <math.h>//Para hacer operaciones matematicas mas complicadas como las Potencias.

int main(){
  int x;
  int y;  //Es lo mismo que escribir "int x,y;"


  x=10;
  y=2;

  //operaciones

  x=x+y;//Operación 1.
  //x+=y;/*(Esto y la Operación es lo mismo pero escrito de distinta manera)*/
  printf("El valor de x + y es igual a: %i \n",x );

  x=x-y;//Operación 2
  //x-=y;
  printf("El valor de x - y es igual a: %i \n",x );

  x=x*y;//Operación 3
  //x*=y;
  printf("El valor de x * y es igual a: %i \n",x );

  x=x/y;//Operación 4
  //x/=y;
  printf("El valor de x / y es igual a: %i \n",x );

  x=x%y;//Operación 5
  //x%=y;
  printf("El valor de x % y es igual a: %i \n",x );//En este caso el valor de esta operaciónequivale al resto de la división de x entre y, osea(x/y).


  //Despues de cada operación el valor de int x, va cambiando.

  x=10;//Como en la ultima operación x equivale a 0, declaramos a x igual a 10 como el resultado de x en la Operación 4.

  x=pow(y,x);//Esto se lee "y elevado a x".
  printf("El valor de y elevado a x es: %i\n",x);

  x=sqrt(x);//Esto se lee "la raiz cuadrada de x"
  printf("El valor de la raíz cuadrada de x es: %i\n ",x);

  //Operadores de incremento

  x++;//Esto hace que x aumente en una unidad
  printf("El valor de x luego del operador ++ es: %i \n",x );

  x--;//esto hace que x disminuya en una unidad
  printf("El valor de x luego del operador -- es: %i \n",x );




  return 0;
}
