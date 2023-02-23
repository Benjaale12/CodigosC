//3.4 Hacer un cronometro que comience cuando pulse la tecla espacio.

#include <stdio.h>
#include <windows.h> // #include <unistd.h> En linux

int main(){

	int h, min, seg, x;

	x=1000; //mil milisegundo=1 segundo

	for(h=0;h<24;h++){
		for(min=0;min<60;min++){
			for(seg=0;seg<60;seg++){
				printf("%02i:%02i:%02i.\r",h, min, seg);//  \r, reimprime arriba del printf
				//%i= 0:0:3      %02i=00:00:03
				Sleep(x);//Da la hora cada 1000 milisegundos por X, Sleep con mayuscula en la S
			}
		}
	}
	return 0;
}
