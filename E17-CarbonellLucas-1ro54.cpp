/*
    AUTOR: Lucas Carbonell
	COMISION: 1ro 54

	E17: Del registro de partes meteorologico, de un mes de 30 dias,
    se registra la fecha, temperatura maxima y temperatura minima.

    Diseñar un algoritmo que permita informar:
        * El dia más frio y cual fue su temperatura.
        * El dia más calido y cual fue su temperatura.
*/
#include <stdio.h>
#include <stdlib.h>

#define MES 30

main()
{
    float maxima;
    float minima;
    float temperaturaMasCalida;
    float temperaturaMasFria;
    int diaMasCalido;
    int diaMasFrio;

    for (int dia = 1; dia <= MES; dia++)
    {
        system("clear");
        printf("Temperatura dia %i: Ingrese la minima: ", dia);
        scanf("%f", &minima);
        printf("Temperatura dia %i: Ingrese la maxima: ", dia);
        scanf("%f", &maxima);

        while (maxima < minima)
        {
            printf("La temperatura maxima debe ser mayor o igual a la minima: ");
            scanf("%f", &maxima);
        }

        if(dia == 1)
        {
            temperaturaMasCalida = maxima;
            temperaturaMasFria = minima;
            diaMasCalido = dia;
            diaMasFrio = dia;
        }
        else
        {
            if(maxima > temperaturaMasCalida)
            {
                temperaturaMasCalida = maxima;
                diaMasCalido = dia;
            }

            if(minima < temperaturaMasFria)
            {
                temperaturaMasFria = minima;
                diaMasFrio = dia;
            }
        }
    }

    printf("Dia mas calido fue el %i con una maxima de %.2f\n", diaMasCalido, temperaturaMasCalida);
    printf("Dia mas frio fue el %i con una minima de %.2f\n", diaMasFrio, temperaturaMasFria);
}
