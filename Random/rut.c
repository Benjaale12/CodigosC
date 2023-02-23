//sacar el numero digitador del resultado
#include <stdio.h>

int main(){
	/*int rut, aux;
	int a, b, c, d, e, f, g, h;*/
	//  2  0  4  6  0  3  1  9
	printf("Ingresa tu rut sin digito verificador y sin puntos: ");

	int rut;
   int a=0;//decena de millon//
   int b=0;//unidad de millon//
   int c=0;//centena de millar//
   int d=0;//decena de millar//
   int e=0;//unidad de millar//
   int f=0;//centena//
   int g=0;//decena//
   int h=0;//unidad//
   int aux;
   int suma, suma2;
   int resto;


   scanf("%i",&rut);

   if(rut<40000000){
	   for(rut;rut>=10000000;a++){
		   rut=rut-10000000;
	   }
	   if(a==0){

	   }
	   else{
		   	printf("%i",a);
	   }

   }
   else{}

/*-------------------------------------------*/
	if(rut>1000000){
		for(rut;rut>1000000;b++){
			rut=rut-1000000;
		}
	}
	else{}
      printf("%i.",b);
/*-------------------------------------------*/
	if(rut>100000){
		for(rut;rut>100000;c++){
			rut=rut-100000;
		}
	}
	else{}
	  printf("%i",c);
/*-------------------------------------------*/
	if(rut>10000){
		for(rut;rut>10000;d++){
			rut=rut-10000;
		}
	}
	else{}
	  printf("%i",d);
/*-------------------------------------------*/
	if(rut>1000){
		for(rut;rut>1000;e++){
			rut=rut-1000;
		}
	}
	else{}
	  printf("%i.",e);
/*-------------------------------------------*/
	if(rut>100){
		for(rut;rut>100;f++){
			rut=rut-100;
		}
	}
	else{}
	  printf("%i",f);
/*-------------------------------------------*/
	if(rut>10){
		for(rut;rut>10;g++){
			rut=rut-10;
		}
	}
	  printf("%i",g);
/*-------------------------------------------*/

      h=rut;
	  printf("%i\n",h);
/*-------------------------------------------*/


	//}
   //else{}
	suma=a*3+b*2+c*7+d*6+e*5+f*4+g*3+h*2;//163

	suma2=suma/11;
	suma2=suma2*11;//154
	resto=suma-suma2;
	resto=11-resto;
	if(resto==10){
		printf("El codigo verificador es: k\n");
	}
	if(resto==11){
		printf("El codigo verificador es: 0\n");
	}
	if(resto<=9 && resto>=0){
		printf("El codigo verificador es: %i\n",resto);
	}




	//printf("%i %i %i %i %i %i %i %i\n",a,b,c,d,e,f,g,h);
	return 0;
}
