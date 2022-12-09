#include <stdio.h>

/* Fibonacci.
El programa calcula y escribe los primeros 50 números de Fibonacci.
I, PRI, SEG, SIG: variables de tipo entero. */

void main(void)
{
int I, PRI = 0, SEG = 1, SIG;//no entendi que se hizo aqui 
printf("\t %d \t %d", PRI, SEG);//estare investigando
for (I = 3; I<= 50; I++)
{
SIG = PRI + SEG;
PRI = SEG;
SEG = SIG;
printf("\t %d", SIG);
}
}
