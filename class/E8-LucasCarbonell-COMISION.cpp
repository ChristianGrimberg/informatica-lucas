/*AUTOR:
COMISION:
E8. Se debe ingresar un n�mero entero, debi�ndose indicar si dicho n�mero es par o impar.*/

/*1. Indico las bibliotecas que voy a utilizar*/
#include <stdio.h>
#include <stdlib.h>

/*2. La funci�n main() define la estructura principal del
         programa*/
int main()
{  // Comienzo del programa.

//3. Declaro las variables y las estructuras de datos.
	int numero;
	
/*4. Ingreso los datos*/
	printf("N%cmero:\t", 163);
	scanf("%i", &numero);
	
/*5. Realizamos el proceso*/   
	if(numero%2==0)
	{
		printf("N%cmero par es %i", 163, numero);
	}
	if(numero%2!=0)
	{
		printf("N%cmero impar es %i", 163, numero);
	}
	printf("\n");
	//system("pause");
} // 7. Fin del programa. 

