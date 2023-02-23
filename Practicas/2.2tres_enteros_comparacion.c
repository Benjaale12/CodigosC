//2.2 Ampliacion de estructuras selectivas

/*Realiza un programa que lea 3 numeros enteros distintos e imprima el mayor y
el menor valor de los tres. Intente que el programa haga la menor cantidad de
comparaciones.*/

#include <stdio.h>

int main(){
  int a, b, c;
  int max, min;

  printf("Introduce un valor para A:\n");
  scanf("%i",&a);

  printf("Ahora introduce un valor para B:\n");
  scanf("%i",&b);

  printf("Ahora introduce un valor para C:\n");
  scanf("%i",&c);

  printf("Los numeros que acabas de introducir son:\n");
  printf(" ------------------------------------------------\n");
  printf("|       %i        |        %i       |     %i        |\n",a,b,c);
  printf(" ------------------------------------------------\n");

//AQUI SE DETERMINA EL MAYOR DE LOS 3 NUMEROS
  if(a>b){//Si A es mayor que B
    if(a>c){//Si A es mayor que C
      max=a;
    }
    else{
      max=c;
    }
  }
  else{
    if(b>c){
      max=b;
    }
    else{
      max=c;
    }
  }
  printf("El MAYOR de los tres numeros es: %i. \n\n",max);

//AQUI SE DETERMINA EL MENOR DE LOS 3 NUMEROS
  if(a<b){//Si A es Menor que B
    if(a<c){//Si A es menor que C
      min=a;
    }
    else{
      min=c;
    }
  }
  else{
    if(b<c){//Si B es Menor que C
      min=b;
    }
    else{
      min=c;
    }
  }
  printf("El MENOR de los tres numeros es: %i. \n\n",min);

  return 0;
}
