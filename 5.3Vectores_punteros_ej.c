//introducir valores numericos en un array mediante Punteros

#include <stdio.h>

int main(){
	int i;
	int vec[]={1,2,3};

	for(i=0;i<3;i++){
		//printf("%i\n",*(vec+i));//vec[0]==>*(vec+0)
		printf("|%i|",vec[i]);
	}
	return 0;
}
