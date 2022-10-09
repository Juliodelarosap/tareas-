#include <stdio.h>
#include <math.h>

/* Serie de ULAM.
El programa, al recibir como dato un entero positivo, obtiene y escribe
la serie de ULAM.
NUM: variable de tipo entero. */

void main(void)
{
int NUM;
printf("Ingresa el número para calcular la serie: ");
scanf("%d", &NUM);
if (NUM > 0)
{
printf("\nSerie de ULAM\n");
printf("%d \t", NUM);
while (NUM != 1)//la serie ulam mientras el numero sea diferente de 1 hara el programa mas abajo 
{
if (pow(-1, NUM) > 0)//si la(-1)^n da 1 sera par  
NUM = NUM / 2;//realizara esto 
else
NUM = NUM * 3 + 1;//caso contrario este 
printf("%d \t", NUM);// y lo imprimira hasta que el numero sea 1 
}
}//terminando la serie 
else
printf("\n NUM debe ser un entero positivo");//en caso contrario al inicio imprimira estos
}
