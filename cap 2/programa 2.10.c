#include <stdio.h>
#include <math.h>

/*  par, impar o nulo

NUM: variable de tipo entero. */

void main(void)
{
	int NUM;
	printf("ingrese el numero:  ");
	scanf("%d", &NUM);
	if (NUM == 0)//si el numero que el usuario entra es igual a 0, imprimira nulo
		printf("\nNulo");
	else//en caso que sea diferente de 0 hara una operacion
		if (pow(-1, NUM) > 0)//realizara la funcion pow para determinar si es par 
			printf("\nPar");
		else //si el resultado no es mayor a 0 pues seria impar 
			printf("\nImpar");
			
}
