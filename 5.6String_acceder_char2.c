//Vamos a saber que tan largo es un string
//int srtlen=dice la cantidad de caracteres sin contar el '\0' final
//y cambiar un caracter por un espacio

#include<stdio.h>
#include<string.h>
void cantidad_char(char c1[]);

int main(){
	char c1[]="Ho hola soy german y te apuesto un vaso a que estas leyendo esto.";
	printf("%s\n",c1);
	cantidad_char(c1);//En esta funcion se busca la cantidad de caracteres y cambiamos el caracter
	printf("Este es el string despues de cambiar las A por espacios.\n");
	printf("%s\n",c1);
	return 0;
}
void cantidad_char(char c1[]){
	int limite, i;
	limite=strlen(c1);//Con esto podemos saber cuantos caracteres tiene un string que no se le asigno memoria
	for(i=0;i<limite;i++){
		if(c1[i]=='a'){
			c1[i]=' ';
		}
	}
}
