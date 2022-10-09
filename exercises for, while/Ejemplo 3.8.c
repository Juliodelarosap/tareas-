#include <stdio.h>

/* Factorial.
El programa calcula el factorial de un número entero.
FAC, I, NUM: variables de tipo entero. */

void main(void)
{
int I, NUM;
long FAC;

printf("\nIngrese el número: ");
scanf("%d", &NUM);

if (NUM >= 0)//como en ejemplos anteriores si en num es mayor o igual a 0 
{
FAC = 1;// se coloca el valor del fac que es un long
for (I=1; I <= NUM; I++)//realizara lo siguiente
FAC *= I;//*= asignacion de multiplicacion seria lo mismo que hacer FAC = FAC * I
printf("\El factorial de %d es: %ld", NUM, FAC);//Y DEVUELVE EL FACTORIAL DEL NUMERO INTRODUCIDO
}
else
printf("\nError en el dato ingresado");// en caso contrario imprimira esto
}
