#include <stdio.h>

/* N�meros perfectos.
El programa, al recibir como dato un n�mero entero positivo como l�mite, obtiene
los n�meros perfectos que hay entre 1 y ese n�mero, y adem�s imprime cu�ntos n�meros perfectos hay en el intervalo.
I, J, NUM, SUM, C: variables de tipo entero. */

void main(void)
{
int I, J, NUM, SUM, C = 0;
printf("\nIngrese el n�mero l�mite: ");
scanf("%d", &NUM);
for (I = 1; I <= NUM; I++)//aqui el bucle se le pone de limite el usuario 
{
SUM = 0;
for (J = 1; J <= (I / 2); J++)//aqui realizara la compraracion luego de revisar si se cumple la condicion 
if ((I % J) == 0)//mirara si el modulo es igual a 0 y dira que es un numero perfecto
SUM += J;
if (SUM == I)//tambien dira que en ese rango cuantos numeros perfectos hay 
{
printf("\n%d es un n�mero perfecto", I);
C++;
}
}
printf("\nEntre 1 y %d hay %d n�meros perfectos", NUM, C);
}
