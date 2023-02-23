//2.1 Estructuras selectivas(if and Else)

#include <stdio.h>

int main(){
  int x;

  x=5;//Si le asignamos cualquier valor a x que sea distinto de 5, este ejectutará la linea ELSE
      //Pero si le asignamos el valor 5 a x, este ejectutará la linea IF

  if(x==5){//Las comparaciones pueden ser "=="  "<"  ">"  "<="  ">="  "!="(Distinto que).
    printf("El valor de x es 5.\n");
  }
  else{
    printf("El valor de x NO es 5.\n");
  }


  return 0;
}
