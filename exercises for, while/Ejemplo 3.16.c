#include <stdio.h>

/* Calificaciones.
El programa, al recibir un grupo de calificaciones de un alumno, obtiene el promedio de calificaciones de cada uno de ellos y, además, los alumnos con el mejor
y peor promedio.

I, MAT, MAMAT y MEMAT: variables de tipo entero.
CAL, SUM, MAPRO, MEPRO y PRO: variables de tipo real.*/

void main(void)
{
int I, MAT, MAMAT, MEMAT;
float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0;
printf("Ingrese la matrícula del primer alumno:\t");
scanf("%d", &MAT);
while (MAT)// ponemos que mat tiene que ser diferente de 0 para emopezar 
{
SUM = 0;
for (I = 1; I<= 5; I++)//se colocan que para cada bucle incremente 1, hasta un maximo de 5 notas 
{
printf("\tIngrese la calificación del alumno: ", I);//se ingresa la calificacion 
scanf("%f", &CAL);
SUM += CAL;//y se van agregando a variable cal para luego 
}
PRO = SUM / 5;// sacar en promedio con la variable sum
printf("\nMatrícula:%d\tPromedio:%5.2f", MAT, PRO);//esto se repetira tantas veces como alumnos haya y el while sea diferente de 0 
if (PRO > MAPRO)//aqui se realizan las condiciones para poner; el mejor pormedio y mejor matrucila y peores 
{
MAPRO = PRO;
MAMAT = MAT;
}
if (PRO < MEPRO)
{
MEPRO = PRO;
MEMAT = MAT;
}
printf("\n\nIngrese la matrícula del siguiente alumno: ");
scanf("%d", &MAT);
}
printf("\n\nAlumno con mejor Promedio:\t%d\t\%5.2f", MAMAT, MAPRO);
printf("\n\nAlumno con peor Promedio:\t%d\t\%5.2f", MEMAT, MEPRO);
}
