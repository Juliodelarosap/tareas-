#include <stdio.h>
#include <math.h>

/* expresion.
el programa, al recibir como datos tres valores enteros, establece si los 
mismos satisfacen la expresion determinada.

R, T y Q: variables dd tipo entero.
RES: variable de tipo real. */

void main(void)
{
	float RES;
	int R, T, Q;
	printf("ingrese los valores de R, T y Q: ");
	scanf("%d %d %d", &R, &T, &Q);
	RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);/* aqui se utiliza una operecion de la libreria math.h que seria POW
	que hay que pasarle dos operando entre parentesis, entonces seria POW<operando_numero_base> al <operando_exponente>*/
	if (RES < 820)//si el resultado es menor a 820 imprimira lo siguiente abajo 
		printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);
}
