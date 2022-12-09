#include <stdio.h>
#include <math.h>

/* funcion matematica. 
el programa obtiene el resultado de una funcion.

OP y T: variables de tipo entero.
RES: variable de tipo real. */

void main(void)
{
int OP, T;
float RES;
printf("ingrese la opcion del calculo y el valor entero: ");
scanf("%d %d", &OP, &T);
switch(OP)//utilizando la funcion switch con el selector como OP 
{//tenemos varias opciones o ramificaciones, que dependiendo de la opcion de toma una u otra 
	case 1: RES = T/5;
		break;
	case 2: RES = pow(T,T);
	/* la funcion pow est definida en la biblioteca math.h*/
		break;
	case 3:// este se deja en blanco por que el case 3 y 4 con iguales 
	case 4: RES = 6 * T/2;
		break;
	default: RES = 1;/*este seria el caso que de otra forma se 
	seleccion diferente a las demas de ejecutaria esta*/ 
		break;
}
printf("\nresultado:     %7.2f", RES);
}
