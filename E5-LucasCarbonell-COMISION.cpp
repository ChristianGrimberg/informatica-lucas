/*AUTOR:
COMISION:
E5: Ingresar la marca y el kilometraje de un veh�culo,   mostrar el mensaje �Realizar el control t�cnico�, 
si el kilometraje es mayor 10000. */

/*1. Indico las bibliotecas que voy a utilizar*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*2. La funci�n main() define la estructura principal del
         programa*/
int main()
{  // Comienzo del programa.

//3. Declaro las variables y las estructuras de datos.
	char marca[15];   
    int kilometraje;

/* 4. Ingreso el dato*/
    fflush(stdin);
    scanf("%s", marca);
    scanf("%i", &kilometraje);

/* 5. Realizo el proceso utilizando la estructura condicional simple, en este tambi�n mostramos el resultado obtenido.*/
    if (kilometraje >10000)
    {   /*Muestro el mensaje*/
/*6. Muestro los resultados*/
        puts("Realizar el control t�cnico");
    }
}  // 7. Fin del programa. 


