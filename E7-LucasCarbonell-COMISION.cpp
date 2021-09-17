/*E7: Ingresar 2 n�meros y realizar un men� de opciones
para que los sume, reste o los muestre.*/

/*1. Indico las bibliotecas que voy a utilizar*/
#include <stdio.h>
#include <stdlib.h>

/*2. La funci�n main() define la estructura principal del
         programa*/
int main()
{  // Comienzo del programa.

//3. Declaro las variables y las estructuras de datos.
   int nro1, nro2, opcion;
   int suma, resta;
   
/*4. Ingreso los datos*/
   scanf("%i", &nro1);
   scanf("%i", &nro2);
   
/*5. Realizamos el men� de opciones*/
   printf("\t\tMen%c\n", 163);
   printf("1.Suma - 2.Resta\n");
   /*Ingreso la opci�n para el men�*/
   scanf("%i", &opcion);
   
/*6. Resuelvo las opciones del men�*/
    switch (opcion)
    { // Inicio de la estructura m�ltiple.
    	case 1:
        /*Acciones para la opci�n 1*/
           suma = nro1 + nro2;
           printf("\nLa suma es:\t%i", suma);
           break;
		case 2:
        /*Acciones para la opci�n 2*/
           resta = nro1 - nro2;
           printf("\nLa resta es:\t%i", resta);
           break; 
  		default:
        /*Acciones para la opci�n mayor a 2*/
           printf("\nLos N%c ingresados son:\n", 167);
           printf("%i y %i", nro1, nro2);
   	} // Fin de la estructura m�ltiple.
   	printf("\n");
	//system("pause");
} // 7. Fin del programa. 

