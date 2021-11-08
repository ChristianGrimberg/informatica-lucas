/*
     AUTOR: Lucas Carbonell
     COMISION: 1ro 54

     E14: Ingresar el apellido y el sueldo de 5 empleados. Sacar el promedio de los sueldos,
     mostrar el resultado y a continuacion a los datos ingresados.
*/

#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 5

int main()
{
	float sueldos[CANTIDAD];
     char apellidos[CANTIDAD][15];
     int c; //Contador
     float promedio;
     float suma = 0;

     for (c = 0; c < CANTIDAD; c++)
     {
          printf("\nNombre:\t");
          fflush(stdin);
          scanf("%s",apellidos[c]);
          printf("\nSueldo:\t");
          scanf("%f", &sueldos[c]);
          suma = suma+sueldos[c];
     }

     promedio = suma / CANTIDAD;
     printf("Promedio:%.3f\t", promedio);
     printf("\n");

     //system("pause");
     //system("cls");

     printf("\nListado General");
     for (c = 0; c < CANTIDAD; c++)
     {
          printf("\n%s", apellidos[c]);
          printf("\t\t\t%.2f", sueldos[c]);
     }
     printf("\n");
     //system("pause");
}
