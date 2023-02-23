#include <stdio.h>
#include <time.h>
#include <windows.h>

int part_2(int,int);

int main(){
	int x, t;
	int mult;
	printf("Introuduce un numero para sacar el factorial:\n");
	scanf("%i",&x);
	t=100;
	printf("%i!=",x);

	//part_2();

	mult=part_2(x,t);

	printf("=%i",mult);

	return 0;
}

int part_2(int x, int t){
	int mult=1;
	for(int i=1;i<=x;i++){
		if(i==x){
			printf("%i",i);
			mult=mult*i;
		}
		else{
			printf("%ix",i);
			mult=mult*i;
		}
		Sleep(t);
	}
	return mult;
}
