//Compara dos cadenas de caracteres
#include <stdio.h>
#include <string.h>

int main(){
	char c1[5];
	char c2[5];

	printf("Introduce la primera frase: ");
	fgets(c1,5,stdin);

	printf("Introduce la segunda frase: ");
	fflush(stdin);
	fgets(c2,5,stdin);

	if(strcmp(c1,c2)==0){
		printf("Los dos Strings son iguales.\n");
	}
	else{
		printf("Los dos Strings son diferentes.\n");
	}
	return 0;
}
