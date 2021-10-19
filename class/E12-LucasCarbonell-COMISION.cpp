/*AUTOR:
COMISION:
E12: Leer 5 n�meros, sumarlos y mostrar el resultado. */

/*1. Indico las bibliotecas que voy a utilizar*/
#include <stdio.h>
#include <stdlib.h>

/*2. La funci�n main() define la estructura principal del
         programa*/
main()
{  // Comienzo del programa.

//3. Declaro las variables y las estructuras de datos.
   int suma = 0;
   int contador = 0;
   int numero; 
   
//4. Resolvemos el proceso
   printf("Ingresar 5 n%cmeros:\n", 163);
   while (contador<5)
   {
      scanf("%i", &numero);
      contador = contador + 1;
      suma = suma + numero; 
   }

//5. Mostramos el resultado
   printf("\nLa suma es: %i", suma);
   printf("\n");
   //system("pause");
}//6. Fin del programa

