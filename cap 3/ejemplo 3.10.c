#include <stdio.h>
#include <math.h>

/* Pares e impares.
El programa, al recibir como datos N números enteros, obtiene la suma de los
números pares y calcula el promedio de los impares.

I, N, NUM, SPA, SIM, CIM: variables de tipo entero. */

void main(void)
{
int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;
printf("Ingrese el número de datos que se van a procesar:\t");
scanf("%d", &N);
if (N > 0)//se establece que n tiene que ser mayot que 0, caso contrario no se procesara nada 
{
for (I=1; I <= N; I++)//aqui se ponen las condiciones del for, diciendo que si I es menor o igual a N continue 
{
printf("\nIngrese el número %d: ", I);//ingresamos los numeros enteros  y este ira pidiendo el numero N que ingresamos 
scanf("%d", &NUM);
if (NUM)
if (pow(-1, NUM) > 0)//aqui se comprueba si este es par o impar 
SPA = SPA + NUM;//al ser par pues se hace este calculo
else
{
SIM = SIM + NUM;//caso contrario este 
CIM++;
}

}
	printf("\n La suma de los números pares es: %d", SPA);//imprimira la suma de los pares y el promedio de impares 
	printf("\n El promedio de números impares es: %5.2f", (float)(SIM / CIM));
}
else
printf("\n El valor de N es incorrecto");// saliendo este resultado
}

