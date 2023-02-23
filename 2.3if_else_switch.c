//2.3 Estructuras if/else anidadas y switch
/*Realiza un programa en C que lea un numero entre 1 y 4 y devuelva el dia
de la semana correspondiente para 1 Lunes , 2 Martes, etc*/

#include <stdio.h>

int main(){

  int x, y, z;

  printf("\nIntoduce un numero entre 1 y 4: (X)\n");
  scanf("%i",&x);


//IF/ELSE tipo Switch(X)
  if(x<=4 && x>=1){
    if(x==1){
      printf("LUNES\n");
    }
    if(x==2){
      printf("MARTES\n");
    }
    if(x==3){
      printf("MIERCOLES\n");
    }
    if(x==4){
      printf("JUEVES\n");
    }
  }
  else{
    printf("EL NUMERO QUE ESCRIBISTE ES: %i. \nDebe ser entre 1 y 4.\n",x);
  }

printf("------------------------------------------------------------------\n");

//ELSE IF(Y)
  printf("Introduce un numero entre 1 y 4: (Y)\n");
  scanf("%i",&y);

  if(y==1){
    printf("Lunes\n");
  }
  else if(y==2){
    printf("Martes\n");
  }
  else if(y==3){
    printf("Miercoles\n");
  }
  else if(y==4){
    printf("Jueves\n");
  }
  else{
    printf("El numero %i NO ES VALIDO\n",y);
  }

printf("------------------------------------------------------------------\n");
//SWITCH
  printf("Introduce un numero entre 1 y 4: (Z)\n");
  scanf("%i",&z);

  switch(z){
    case 1: printf("Lunes\n");break;//El BREAK permite salir del SWITCH
    case 2: printf("Martes\n");break;//Si quitamos los Break, switch pasará caso por caso hasta el ultimo
    case 3: printf("Miercoles\n");break;
    case 4: printf("Jueves\n");break;
    default: printf("El numero no es correcto\n");//En caso de que Z no esté entre los valores DEFAULT será el Caso.
  }


  return 0;
}
