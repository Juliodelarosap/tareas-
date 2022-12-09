#include <stdio.h>

/* Examen de admisión.
El programa, al recibir como datos una serie de calificaciones de un examen,
obtiene el rango en que se encuentran éstas.
R1, R2, R3, R4 y R5: variable de tipo entero.
CAL: variable de tipo real. */

void main(void)
{
int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0;
float CAL;
printf("Ingresa la calificación del alumno: ");
scanf("%f", &CAL);
while (CAL != -1)//mientras este valor sea diferente de -1 se seguira ejecutando el bucle de abajo pidiendp 
{//calificaciones de estudiantes 
if (CAL < 4)//si la calificacion es menor que 4, r1 recibira un incremento y asi con ls demas  S
R1++;
else
if (CAL < 6)
R2++;
else
if (CAL < 8)
R3++;
else
if (CAL < 9)
R4++;
else
R5++;
printf("Ingresa la calificación del alumno: ");
scanf("%f", &CAL);
}
printf("\n0..3.99 = %d", R1);//cuando el resultado sea -1 imprimira cuantos alumnos estan en cada rango
printf("\n4..5.99 = %d", R2);
printf("\n6..7.99 = %d", R3);
printf("\n8..8.99 = %d", R4);
printf("\n9..10 = %d", R5);
}
