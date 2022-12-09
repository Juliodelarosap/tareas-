#include <stdio.h>
/* incremento de precio.
el programa , al recibir como dato el precio de un producto importado,
incrementa 11% el mismo si este es inferior a $1,500.
PRE y NPR: variable de tipo real. */

void main(void)
{
float PRE, NPR;
printf("ingrese el precio del producto: ");
scanf("%f", &PRE);
if (PRE < 1500)// aqui se dice que si el precio es menor a 1500 
{
	NPR = PRE * 1.11;// haga la siguiente operacion para incrementar el 11%
	printf("\nnuevo precio: %7.2f", NPR);// y lo imprima con en nuevo precio
}
 } 
