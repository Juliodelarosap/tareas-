#include <stdio.h>

/* Serie.
El programa imprime los términos y obtiene la suma de una determinada serie.
I, SSE y CAM: variable de tipo entero. */

void main(void)
{
int I = 2, CAM = 1;
long SSE = 0;
while (I <= 2500)//la condicion que hara el bucle hasta que se deje de cumplir 
{
SSE = SSE + I;//
printf("\t %d", I);
if (CAM)//si cam es mayor que 0
{//hara esto 
I += 5;//+= es igual a x=y+x
CAM--;//-- significa decremento
}
else// caso contrario realizara esto 
{
I += 3;//igual que el anterior 
CAM++;//++ significa incremento
}
}
printf("\nLa suma de la serie es: %ld", SSE);//imprimiendo el resultado de esta serie 
}
