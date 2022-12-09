#include <stdio.h>
#include <math.h>

/* Función.El programa, al recibir como dato un valor entero, calcula el resultado de 
una función.

Y: variable de tipo entero.
X: variable de tipo real. */


void main(void)
{
float X;
int Y;
printf("Ingrese el valor de Y: ");
scanf("%d", &Y);
if (Y < 0 || Y > 50)// || estas barras significan que es 0 si x e y son 0 en caso contrario 1 
	X = 0;//significa que si se cumple una sola de esas condiciones 
else // caso contrario
		if (Y <= 10)//y seria menor o igual a 10 
			X = 4 / Y - Y;// realizara este calculo 
		else // en caso de que no volvera a evaluar 
			if (Y <= 25)//si y es menor o igual a 25
				X = pow(Y, 3) - 12;//realiza este 
			else // y por ultimo realizara esta operacion de abajo 
				X = pow(Y, 2) + pow(Y, 3) - 18;
printf("\n\nY = %d\tX = %8.2", Y, X);
}
