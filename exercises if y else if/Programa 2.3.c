#include <stdio.h>
/* promedio curso.
el programa, al recibir como datoel promedio de un alumno en un curso
universitario, escribe aprobado si su promedio es mayor o igual a 6, o 
reprobado en caso contrario.

PRO: variable de tipo real.    */

void main(void)
{
float PRO;
printf("ingrese el promedio del alumno: ");
scanf("%f", &PRO);
if (PRO >= 6.0)//al igual que el 2.1 si el promedio es mayor o igual a 6
	printf("\naprobado");// el programa imprimira esta opcion
else // en el caso contrario y sea menor se ira por el else 
	printf("\nreprobado");// imprimiendo este resultado ya que la primera(if), ha sido falsa
	
}
