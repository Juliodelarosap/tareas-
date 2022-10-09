#include <stdio.h>
#include <math.h>

/* Suma cuadrados.
El programa, al recibir como datos un grupo de enteros positivos, obtiene el
cuadrado de los mismos y la suma correspondiente a dichos cuadrados. */

void main(void)
{
	
int NUM;
long CUA, SUC = 0;//utilizamos long por primera vez que este seria 5656L en tama;o
printf("\nIngrese un número entero 0 para terminar:\t");//el programa ira calculando mientras el entero sea mayor a 0 o diferente de este.
scanf("%d", &NUM);
while (NUM)//mientras este sea el caso se realizara la siguiente operacion con la libreria math.h

/* Observa que la condición es verdadera mientras el entero es diferente de cero. */

{
CUA = pow (NUM, 2);//la potencia que se utilisa en math.h
printf("%d al cubo es %ld", NUM, CUA);
SUC = SUC + CUA; //esto se van sumando para que cuando se ingrese un 0 
printf("\nIngrese un número entero 0 para terminar:\t");
scanf("%d", &NUM);
}
printf("\nLa suma de los cuadrados es %ld", SUC);//imprima la siguiente linea 
}
