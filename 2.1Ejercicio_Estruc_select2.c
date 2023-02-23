//Ejerecicio: Introduce un numero por teclado para acertar el numero incognito
#include <stdio.h>

int main(){

  int x,y;//x= es el numero incognito || y= es el numero introducido por teclado
  x=9;//declaramos que el valor incognito X es 9.


  printf("Existe una numero incognito entre el 1 y el 10.\n");
  printf("Adivina el numero escribiendolo por teclado:\n");

  scanf("%i",&y);

  if(x==y){
    printf(" ----------------------------------------------\n");
    printf("|                                             |\n");
    printf("|      HIJO DE TU PUTA MADRE, ACERTASTE!      |\n");
    printf("|                                             |\n");
    printf(" ----------------------------------------------\n");
  }
  else{
    printf("----------------------------------------------\n");
    printf("No has acertado, Rerun el codigo e intentalo nuevamente :(\n");
  }

  return 0;
}
