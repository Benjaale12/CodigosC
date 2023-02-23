#include<stdio.h>
//En este ejercicio nos pedira ingresar un numero del 1 hasta el 10, si este no es un numero valido dara ERROR.
//Si es valido el mismo numero saldra impreso por pantalla


int main(){
  int x;

  printf("Escribre un valor entre 1 hasta el 10:\n");
  scanf("%i",&x);

  if(x>=1 && x<=10){//el doble & significa "y", osea es una doble condicion.
    printf("El valor de X es: %i\n",x);
  }
  else{
    printf("El valor que debía introducir es desde el 1 al 10, EGGMAN Culiao\n");
  }
  return 0;
}
