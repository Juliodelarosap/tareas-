#include <stdio.h>

/* incremento de precio.
el programa, al recibir como dato el precio de un producto, incrementa al
mismo 11% si es menor a 1500$ y 8% en caso contrario (mayot o igual).

PRE y NPR variables de tipo real.  */

void main(void)
{
float PRE, NPR;
printf("ingrese el precio del producto: ");
scanf("%f", &PRE);
if (PRE < 1500)// como el ejercicio 2.2 si el precio es menor que 1500 
	NPR = PRE * 1.11;//aplicara esta operacion matematica 
else // si no se cumplen las condiciones anteriores este aplicara el else
	NPR = PRE * 1.08;//  realizando este nuevo calculo
printf("\nnuevo precio del producto: %8.2f", NPR);/* el resultado de imprimira
aqui ya que arriba NPR esta en if y else*/
}
