#include <stdio.h>

/* promedio curso.
el programa, al recibir como dato el promedio de un alumno de un curso
universitario, escribe aprobado si su promedio es mayor o igual a 6.

PRO: variable de tipo real.  */

void main(void)//
{
float PRO; // variable de coma flotante se usa float
printf("ingrese el promedio del alumno: ");
scanf("%f", &PRO);
if (PRO >= 6)// aqui se dice que si el promedio es mayor o igual o 6 que imprima aprobado 
	printf("\naprobado");
}
