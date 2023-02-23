//1.3 Variables

#include<stdio.h>

int main(){
  int x; //int=enteros(16bits)[32 768  a  32 767]
  float y; //Flotantes(32bits): Permite hasta 6 decimales[3.4E-38  a  3.4E+38]
  double y2;//Flotantes(64bits): Permite hasta 12 decimales[1.7E-308  a  1.7E+308]
  char z;//Caracter: se le puede asignar una letra o un numero, pero no lo lee como numero si no que lo lee como caracter ASCII

  x=5;
  y=10.5;//maximo 6 decimales
  y2=9.5;
  z='a';

  printf("Valor de X es: %i.\n",x);// %i=int
  printf("Valor de Y es: %f\n",y);//%f=Tipo flotante
  printf("Valor de Y2 es: %f\n",y2);//y2 es una variable double pero es de tipo flotante por eso se usa %f
  printf("Valor de Z es: %c\n",z);//%c=tipo caracter(char)

  printf("-------------------------------------------\n");//lo de arriba y los de abajo es lo mismo pero escrito de diferente manera

  printf("Valor de X es: %i.\nValor de Y es: %f.\nValor de Y2 es: %f.\nValor de Z es: %c\n",x,y,y2,z);



  //system("pause"); //Sirve para que el dmc diga: Pulse cualquier tecla para continuar, no es necesario ponerlo debido a que el codigo lo ejectuta, ponerlo añadiría otro "Pulse una tecla..."
  return 0;
}
