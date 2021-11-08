/*
    AUTOR: Lucas Carbonell
	COMISION: 1ro 54

	E22: Se debe un programa que mediante un menú de opciones que nos permita realizar las siguientes acciones: 
        a. Ingresar dos números y mostrar la suma de los números ingresados.
        b.	Calcular el cuadrado de la suma del punto “a” del menú.
        c.	Calcular el promedio de los números ingresados.
        d.	Mostrar a todos los resultados.
        x.	Salir del programa. 

*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define CANT 2

char menu();

main()
{
    char opcion = '\0';
    char inicializado = 'n';
    char calculado = 'n';
    float numeros[CANT];
    float suma = 0;
    float cuadrados;
    float promedio;
	
	while(opcion != 'X')
	{
        opcion = menu();

        switch (opcion)
        {
            case 'A':
                for (int i = 0; i < CANT; i++)
                {
                    printf("Ingrese el numero %i: ", (i + 1));
                    scanf("%f",&numeros[i]);
                    suma += numeros[i];
                }

                inicializado = 's';

                printf("La suma de los numeros ingresados es: %.2f\n", suma);
                break;
            case 'B':
                if(inicializado == 's')
                {
                    for (int i = 0; i < CANT; i++)
                    {
                        cuadrados += (numeros[i]*numeros[i]);
                    }
                    
                    calculado = 's';

                    printf("El cuadrado de la suma de los numeros ingresados es %.2f\n", cuadrados);
                }
                else
                {
                    printf("No se cargaron los numeros a calcular\n");
                }
                break;
            case 'C':
                if(inicializado == 's')
                {
                    promedio = suma / CANT;

                    calculado = 's';

                    printf("El promedio de los numeros ingresados es %.2f\n",promedio);
                }
                else
                {
                    printf("No se cargaron los numeros a calcular\n");
                }
                break;
            case 'D':
                if(inicializado == 's' && calculado == 's')
                {
                    printf("Los numeros ingresados son:");
                    for (int i = 0; i < CANT; i++)
                    {
                        printf(" %.2f",numeros[i]);
                    }
                    printf("\n");
                    printf("La suma de los numeros ingresados es: %.2f\n", suma);
                    printf("El cuadrado de la suma de los numeros ingresados es %.2f\n", cuadrados);
                    printf("El promedio de los numeros ingresados es %.2f\n",promedio);
                }
                else
                {
                    printf("No se cargaron o no se calcularon los numeros a mostrar\n");
                }
                break;
            case 'X':
                printf("Saliendo del programa...");
                break;
            default:
				printf("Opcion ingresada no valida\n");
                opcion = '\0';
				break;
        }

        system("pause");
    }
}

char menu()
{
    char opcionElegida;

    system("cls");
    printf("\n");
    printf("(A) Ingreso de 2 numeros y resultado de suma\n");
    printf("(B) Calculo del cuadrado de la suma de los numeros ingresados\n");
    printf("(C) Calculo del promedio de los numeros ingresados\n");
    printf("(D) Mostrar los resultados\n");
    printf("(X) Salir\n");
    printf("Ingrese la opcion elegida: ");
    fflush(stdin);
    setbuf(stdin, NULL);
    scanf("%c",&opcionElegida);
    opcionElegida = toupper(opcionElegida);
    printf("\nOpcion elegida: %c\n",opcionElegida);

    return opcionElegida;
}
