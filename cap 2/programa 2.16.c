#include <stdio.h>

/* empresa textil. 
el programa, al recibir como datos decisivos la categoria y antiguedad de 
un empleado, determina si el mismo reune las condiciones establecidas por 
la empresa para ocupar un nuevo cargo en una sucursal.

CLA, CAT, ANT, RES: variables de tipo entero.
SAL: variable de tipo real. */

void main(void)
{
	int CLA, CAT, ANT, RES;
	printf("\ningrese la clave, categoria y antiguedad del trabajador:");
	scanf("%d %d %d", &CLA, &CAT, &ANT);
	switch(CAT)//con solo 3 case se ponen opciones y se realizara la opcion que corresponde 
	{
		case 3: // case 3 y 4 son iguales se le pide una antiguedad mayor a 5 años
		case 4: if (ANT >= 5)
					RES = 1;// en caso de reunir las condiciones sera uno 
			else 
					RES = 0;// caso contrario sera 0
			break;
		case 2: if (ANT >= 7)// si selecciona el 2 pues debe tener 7años
						RES = 1;// la funcion es similar en cuanto al resultado 
				else
						RES = 0;
				break;
		default: RES = 0;// si se sale de las opciones sera como que no reune las condiciones 
			break;
	}
	if (RES)//imprimiendo eso o el else mas abajo 
			printf("\nel trabajador con clave %d reune las condicones para el puesto", CLA);
  	else 
  			printf("\n el trabajador con clave %d no reune las condiciones para el puesto", CLA);
}
