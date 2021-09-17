/*AUTOR:
COMISION:
E6: Hacer un algoritmo que calcule el total a pagar por la compra de camisas. Si se compran tres camisas o m�s, 
se aplica un descuento del 20%  sobre el total de la compra y si son menos de tres camisas un descuento del 10%. */

/*1. Indico las bibliotecas que voy a utilizar*/
#include <stdio.h>
#include <stdlib.h>

/*2. La funci�n main() define la estructura principal del
         programa*/
int main()
{  // Comienzo del programa.

//3. Declaro las variables y las estructuras de datos.
	float total, precio;
   	int cantidad;
/*4. Ingreso los datos*/
   	scanf("%i", &cantidad);
   	scanf("%f", &precio); 
 /*5. Realizamos el proceso*/   
   	total = cantidad * precio; 
   	//Utilizo la estructura condicional compuesta
   	if (cantidad >= 3 ) 
	{/*C�lculo el total para la condici�n verdadera*/
       total = total - total * 0.20;
	}
	else
	{/*C�lculo el total para la condici�n falsa*/
       total = total - total * 0.10;
	} 
/*6. Muestro el resultado*/    
    printf("%f",  total);
}  // 7. Fin del programa. 


