#include <stdio.h>

/* spa.
el programa, al recibir como datos el tipo de tratamiento, la edad y el
numero de dias de internacion de un cliente en un spa, calula el costo 
total del tratamiento.

TRA, EDA, DIA: variable de tipo entero.
COS: variable de tipo real. */

void main(void)
{
	int TRA, EDA, DIA;
	float COS;
	printf("ingrese tipo de tratamiento, edad y dias: ");
	scanf("%d %d %d", &TRA, &EDA, &DIA);
	switch(TRA)//switch para tener las opciones y difernetes calculos dependiendo de la  opcion 
	{
		case 1: COS = DIA * 2800; break;
		case 2: COS = DIA * 1950; break;
		case 3: COS = DIA * 2500; break;
		case 4: COS = DIA * 1150; break;
		default: COS = -1; break; // en caso de salirse de las opciones de aplicara esta 
	}
	if (COS != -1)//si la variable es diferente de -1 el programa seguira con los calculos 
	{
		if (EDA >= 60)//si la edad del cliente es mayor o igual a 60 
			COS = COS * 0.75;// realiza este calculo 
		else // en otro caso si esta 
			if (EDA <= 25)// es meno o igual a 25 
				COS = COS * 0.85;//se le cobrara de esta manera 
		printf("\nclave tratamiento: %d\t dias: %d\t costo total: %8.2f",
		TRA, DIA, COS);
	}
	else // si el cos es igual a -1 imprimira esto en pantalla 
		printf("\nla clave del tratamiento es incorrecta");
}
