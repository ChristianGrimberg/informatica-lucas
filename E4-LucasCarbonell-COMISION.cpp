/*AUTOR:
COMISION:
E4. Dise�ar el algoritmo necesario para que, habi�ndose le�do el valor de 2 variables NUM1 y NUM2 se intercambien 
los valores de las mismas, es decir que el valor que ten�a NUM1 ahora lo contenga NUM2 y viceversa.*/

/*1. Indico las bibliotecas que voy a utilizar*/
#include <stdio.h>
#include <stdlib.h>

/*2. La funci�n main() define la estructura principal del
         programa*/
int main()
{  // Comienzo del programa.

//3. Declaro las variables y las estructuras de datos.
	int NUM1;
	int NUM2;
	float AUXILIAR;
	
/*4. Ingreso los datos*/
	printf("Ingresar NUM1:\t");
	scanf("%i", &NUM1);
	printf("Ingresar NUM2:\t");
	scanf("%i", &NUM2);
	printf("NUM1 ES %i\n", NUM1);
	printf("NUM2 ES %i", NUM2);
/*5. Realizo el proceso*/	
	AUXILIAR=NUM1;
	NUM1=NUM2;
	NUM2=AUXILIAR;
	
/*6. Muestro los resultados*/
	printf("\nNUM1 ES %i y NUM2 ES %i", NUM1, NUM2);
	printf("\n");
   	//system("pause");
}  // 7. Fin del programa. 
