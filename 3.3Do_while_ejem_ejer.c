//3.3 Hacer un bucle que nos pregunte si queremos continuar y hasta que no escribamos la letra S no pare.

#include <stdio.h>
#include <windows.h>

int main(){

	char c;//char=caracter
	int x, seg;

	x=1000;
	do{
		printf("Introduce una letra:");
		fflush(stdin);//Para que no vuelva a repetir la pregunta
		scanf("%c",&c);//se usa  "%c" porque es de tipo char
		/*for(seg=0;seg<12;seg++){
			printf("Cargando.\r");//  \r, reimprime arriba del printf
			//%i= 0:0:3      %02i=00:00:03
			Sleep(x);
			printf("Cargando..\r");
			Sleep(x);
			printf("Cargando...\r");
			Sleep(x);//Da la hora cada 1000 milisegundos por X, Sleep con mayuscula en la S
			printf("Cargando.\r");//  \r, reimprime arriba del printf
			//%i= 0:0:3      %02i=00:00:03
			Sleep(x);
			printf("Cargando..\r");
			Sleep(x);
			printf("Cargando...\r");
			Sleep(x);//Da la hora cada 1000 milisegundos por X, Sleep con mayuscula en la S
			printf("Cargando.\r");//  \r, reimprime arriba del printf
			//%i= 0:0:3      %02i=00:00:03
			Sleep(x);
			printf("Cargando..\r");
			Sleep(x);
			printf("Cargando...\r");
			Sleep(x);//Da la hora cada 1000 milisegundos por X, Sleep con mayuscula en la S
		}*/

	}while(c!='s' && c!='S');//S y s no son los mismo en codigo ASCII tienen valores diferentes(porque son numeros)
/*  ||=or    &&=and*/
	return 0;
}
