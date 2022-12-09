#include <stdio.h>

/*  ventas descendentes.El programa, al recibir como datos tres valores que representan las ventas
de los vendedores de una tienda de discos, escribe las ventas en
orden descendente.

P, S y R: variables de tipo real.    */


void main(void)
{	
float P, S, R;
printf("\nIngrese las ventas de los tres vendedores: ");
scanf("%f %f %f", &P, &S, &R);
if(P > S)//aqui utilizamos la estructura en cascada para tomar multiples decisiones
	if(P > R)//vemos una secuencia de if donde de si se cumple estas condiciones 
		if(S > R)//se presentaran las siguientes respuestas 
			printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);//imprimira esto si se cumple lo de arriba
	else
		printf("\n\n El orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S);//aqui no es tal cual lo de arriba 
else
	printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S);//mismo caso seria otro camino 
else//aqui se proponen otras elecciones si no se cumple las de arriba 
	if(S > R)//donde se dice que si s es mayor que r 
		if(P > R)//y p mayor que r 
			printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R);//imprimira las siguientes opciones en lugar de las anteriores
		else
			printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P);
	else
		printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P);
}
