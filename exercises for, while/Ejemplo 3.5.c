#include <stdio.h>

/* Suma pagos.
El programa obtiene la suma de los pagos realizados el último mes.

PAG y SPA: variables de tipo real.*/

void main(void)
{
float PAG, SPA = 0;
printf("Ingrese el primer pago:\t");
scanf("%f", &PAG);//a diferencia de los diferentes bucles este primero necesita hacer uno y luego evalua si se tiene que repetir 
/* Observa que al utilizar la estructura do-while al menos se necesita un pago.*/
do//decimos que haga la siguiente operacion con el primer pago que introduzca el usuario 
{
SPA = SPA + PAG;//estos se van sumando y el valor de PAG se guarda para luego ser evaluado
printf("Ingrese el siguiente pago -0 para terminar-:\t ");
scanf("%f", &PAG);//si el valor arriba fue 0 este se sumara, menteniendo igual la sumas anteriores 
}
while (PAG);// y si este es diferente de 0 pues imprimira lo de abajo
printf("\nEl total de pagos del mes es: %.2f", SPA);
}
