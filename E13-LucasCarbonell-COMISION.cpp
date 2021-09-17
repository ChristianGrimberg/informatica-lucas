/*AUTOR:
COMISION:
E13: Ingresar el stock de n cantidad de art�culos, debi�ndose averiguar cual es el stock mayor y cual el menor. 
Mostrar el stock correspondiente. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{  // Comienzo del programa.

//3. Declaro las variables y las estructuras de datos.
	int stock;
    int control = 0;
    int mayor;
    int menor; 
    char continuar = 's'; 
    do
    {   
        printf("\nIngresar el stock:\t");
        scanf("%i", &stock);
        if(control==0)
       {   mayor = stock;
           menor = stock;
           control = 1; 
       }
       if (stock > mayor) 
       {   mayor = stock;
       }
       if (stock < menor) 
       {   menor = stock;  
       }
       printf("\nContinuo S/N:\t"); 
       fflush(stdin);
       scanf("%c", &continuar);
       continuar = tolower(continuar); 
   } while (continuar == 's');
   //system("cls"); 
   printf("\nStock M�ximo:\t%i",mayor);
   printf("\nStock M�nimo:\t%i",menor);
   printf("\n");
   //system("pause"); 
} 

