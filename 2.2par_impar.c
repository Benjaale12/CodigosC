//2.2 Ampliacion de estructuras selectivas

//Ejercicio: Ingresar un numero entero y saber si es par o impar

#include <stdio.h>

int main(){

  int x;

  printf("Ingresa un numero por teclado y te dire si este es par o impar.\n");
  scanf("%i",&x);
  if(x%2==0){
    printf("El numero que ingresaste: %i es PAR!!\n",x);
  }
  else{
    printf("El numero que ingresaste: %i es IMPAR!!\n",x);
  }


  return 0;
}
