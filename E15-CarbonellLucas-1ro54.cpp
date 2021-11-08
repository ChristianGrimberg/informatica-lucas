/*
    AUTOR: Lucas Carbonell
	COMISION: 1ro 54

    E15: Ingresar una serie de numeros enteros debiendose averiguar la cantidad de enteros positivos
    y enteros negativos. Realizar la sumatoria, y si el resultado es positivo, mostrar la cantidad
    de numeros positivos y si es negativo, mostrar el resultado de la suma y a la cantidad de numeros negativos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
    char opcion = '\0';
    int numero = 0;
    int positivos = 0;
    int negativos = 0;
    int sumatoria = 0;

    while(toupper(opcion) != 'N')
    {
        printf("Ingrese un numero entero: ");
        scanf("%i",&numero);

        if (numero > 0)
        {
            positivos++;
        }
        else
        {
            if (numero < 0)
            {
                negativos++;
            }
        }

        sumatoria += numero;

        printf("Desea continuar? [N] para salir: ");
        fflush(stdin); //__fpurge(stdin); //setbuf(stdin, NULL);
        scanf("%c",&opcion);
    }

    if(sumatoria > 0)
    {
        printf("La cantidad de numeros positivos es %i\n",positivos);
    }
    else
    {
        if(sumatoria < 0)
        {
            printf("El resultado de la suma es %i y la cantidad de numeros negativos es %i\n",sumatoria,negativos);
        }
    }
}
