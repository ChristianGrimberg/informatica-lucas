/*E1: Se debe ingresar nombre, sexo, edad y porcentaje de tiempo transcurrido de este año 
«(mes actual / total meses)*100». Mostrar los resultados correspondientes.
AUTOR:
COMISION: */

/*1. Indico las bibliotecas que voy a utilizar*/
#include <stdio.h>

/*2. La función main() define la estructura principal del
         programa*/
int main()
{  // Comienzo del programa.

//3. Declaro las variables y las estructuras de datos.
   int edad;
   char  sexo; 
   char nombre[20];
   float porcentaje; 
   float mesactual;
 /*4. Ingreso los datos*/
   printf("Ingresar la edad:");
   scanf ("%i", &edad);
   fflush(stdin);
   scanf ("%s", nombre);
   fflush(stdin);
   scanf ("%c", &sexo);
   scanf ("%f", &mesactual);
/*5. Realizo los cálculos*/
   porcentaje= (mesactual / 12) * 100; /*En todo cálculo matemático en que intervengan números enteros y números reales, 
   el resultado siempre va a ser real, por consiguiente la variable en donde se va a almacenar el dato tambien debe ser 
   real, porque sino se perderian los decimales que se obtengan en el resultado*/
/*6. Muestro los resultados*/
   printf ("\n%i", edad);
   printf ("\n%s", nombre);
   printf ("\n%c", sexo);
   printf ("\nEl porcentaje es %f\n", porcentaje);

   return 0;
}  // 7. Fin del programa. 
