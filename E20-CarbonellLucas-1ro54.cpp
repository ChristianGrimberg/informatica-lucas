/*
    AUTOR: Lucas Carbonell
	COMISION: 1ro 54

	E20: Se debe hacer un programa que nos permita resolver la siguientes ecuaciones Matematicas y Trigonometricas:
•	Formula para el cálculo de SECANTE: sec = 1/cos()
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

main()
{
    char opcion = '\0';
    double angulo = 0;
    double secante = 0;

    do
    {
        system("cls");
        printf("Calculo de la funcion secante\nIngrese el angulo a calcular: ");
        scanf("%d", &angulo);
        secante = 1 / cos(angulo);
        printf("La secante del angulo %.2f es %.2f\n", angulo, secante);
        printf("Desea continuar con el programa? (S/N): ");
        fflush(stdin);
        scanf("%c", &opcion);
    } while (toupper(opcion) != 'N');
}
