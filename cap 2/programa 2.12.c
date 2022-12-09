#include <stdio.h>
#include <math.h>

/* igualdad de expresiones.
el programa, al recibir como datos T, P y N, comprueba la igualdad de
una expresion determinada.

T, P y N: variables de tipo entero. */

void main(void)
{
	int T, P, N; 
	printf("ingrese los valores de T, P y N: ");
	scanf("%d %d %d", &T, &P, &N);
	if (P != 0)//este if esta con el ultimo else 
	{
		if (pow(T/P, N) == (pow(T, N) / pow(P, N)))//si es diferente de 0 realizara la operacion que se pide para 
			printf("\nse comprueba la igualdad");//comprobar la igualdad, ejemplo: si introdicimos 2,4,6 se imprimira este
		else
			printf("\nno se comprueba la igualdad");//el caso contrario seria 2,3,4 y imprimira este al ver que no se cumple la igualdad
	}//por eso hay un == que significa que x es igual a y 
	else//este se presenta cuando el valor introducido no es diferente de 0
			printf("\nP tiene que ser diferente de cero");
}
