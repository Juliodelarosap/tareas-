#include <stdio.h>

/*Nomina.
el porgrama, al recibir los salarios de 15 profesores,
obtiene el total de la nomina de la universidad. 

I:variable de tipo entero. 
Sal y NOM: variable de tipo real .*/

void main(void)
{
	int I;
	float SAL, NOM;
	NOM = 0;
	for (I=1; I<=15; I++)//aqui la preparacion del ciclo con de le pone un valor a la  variable 
	{	//inicial donde es igual a 1, luego se establece que I tiene que ser menor a 15
	printf("ingrese salario del profesor:\t", I);//para repetir el ciclo y se le incrementa 1 a I 
	scanf("%f", &SAL);//repitiendo el ciclo hasta que la condicion del medio no se cumpla
	NOM = NOM + SAL ;
	}
	printf("\nEl total de la nomina es: %.2f", NOM);//cuando eso pase imprimira eso
}
