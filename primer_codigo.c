#include <stdio.h>

int sum; /*variable global accessible desde cualquier parte del programa*/

void suma(int x) /*variable local declarada como parametro, accesible solo por la función suma*/

{
    sum=sum+x;
return;
}
void intercambio(int *a,int *b)
{
    if(*a>*b)
    {
        int inter; /*variable local, accesible solo dentro del bloque donde se declara*/
        inter=*a;
        *a=*b;
    }
    return;
}
int main(void) /*función principal del programa*/
{
    int contador,a=9,b=0;/*Variables locales solo accesibles por main*/
    sum=0;
    intercambio(&a,&b);
    for(contador=a;contador<=b;contador++) suma(contador);
    printf("\n%d\n");
    printf("\nHola mundo\n");
    return(0);
}
