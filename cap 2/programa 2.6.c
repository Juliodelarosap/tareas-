#include <stdio.h>

/* incremento de salario.
el programa, al recibir como dato el nivel de un profesor, incrementa su 
salario en funcion de la tabla 2.3.

NIV: variable de tipo entero.
SAL: variables de tipo real. */

void main(void)
{
float SAL;
int NIV;
printf("ingrese el nivel academico del profesor:  ");
scanf("%d", &NIV);
printf("ingrese el salario:  ");
scanf("%f", &SAL);
switch(NIV)
printf("ingrese salario:   ");
scanf("%f", &SAL);
switch(NIV)//se aplica el switch para que se seleccion de nivel del profe 
{
	case 1: SAL = SAL * 1.0035; break;// en este este programa cada case es diferente de otro
	case 2: SAL = SAL * 1.0041; break;//asi que se escriben y dependiendo de la seleccion 
	case 3: SAL = SAL * 1.0048; break;// que haga el usuario se realizara uno u otro
	case 4: SAL = SAL * 1.0053; break;//la sentencia break verifica que se ejecute la opcion y continua con el programa
}
printf("\n\nnivel: %d \tnuevo salario: %8.2f",NIV, SAL);
}
