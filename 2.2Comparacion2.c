//2.2 Ampliacion de estructuras selectivas

/*Realiza un programa que lea 3 numeros enteros distintos e imprima el mayor y
el menor valor de los tres. Intente que el programa haga la menor cantidad de
comparaciones.*/

/*Este codigo es igual al codigo "tres_enteros_comparacion.c" pero 
hecho desde 0 por mi*/

#include <stdio.h>

int x,y,z;
int max, min;

int main(){
  printf("Igresa 3 Numeros\n");
  printf("Igresa un Numero para X: \n");
  scanf("%i",&x);

  printf("Ingresa un Numero para Y: \n");
  scanf("%i",&y);

  printf("Ingresa un Numero para Z: \n");
  scanf("%i",&z);

  printf(" --------------------------------------\n");
  printf("|     %i     |      %i      |     %i     |\n",x,y,z);
  printf(" --------------------------------------\n");

//Aqui se determina cual de los numeros es el MAYOR
  if(x>y){
    if(x>z){
      max=x;
    }
    else{
      max=y;
    }
  }
  else{
    max=z;
  }
  printf("El mayor de los numeros es: %i\n",max);

//Aqui se determina cual de los numeros es el MENOR
  if(x<y){
    if(x<z){
      min=x;
    }
    else{
      min=y;
    }
  }
  else{
    min=z;
  }
  printf("El menor de los numeros es: %i\n",min);

  return 0;
}
