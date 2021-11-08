/*
    AUTOR: Lucas Carbonell
	COMISION: 1ro 54

	E18: Se debe realizar un menú de opciones para: Ingresar dos cadenas,
    mostrarlas juntas y separadas, por tamaño, indicar si son iguales y salir del programa.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define STRING_MAX 50

char menu();

main()
{
    char opcion = '\0';
    char primerPalabra[STRING_MAX];
    char segundaPalabra[STRING_MAX];
	
	while(opcion != 'C')
	{
        opcion = menu();

		switch(opcion)
		{
            case 'A':
                printf("Ingrese la primer palabra: ");
                fflush(stdin);
                scanf("%s",primerPalabra);
                printf("Ingrese la segunda palabra: ");
                fflush(stdin);
                scanf("%s",segundaPalabra);
                break;
            case 'B':
                printf("Las palabras ingresadas de forma todas juntas: %s%s\n", primerPalabra,segundaPalabra);
                printf("Las palabras ingresadas de forma separada: %s %s\n",primerPalabra,segundaPalabra);
                printf("La primer palabra [%s] tiene %i caracteres\n",primerPalabra,strlen(primerPalabra));
                printf("La segunda palabra [%s] tiene %i caracteres\n",segundaPalabra,strlen(segundaPalabra));

                if(strcmp(primerPalabra,segundaPalabra) == 0)
                {
                    printf("Las palabras son iguales");
                }
                else
                {
                    printf("Las palabras son distintas");
                }
                break;
            case 'C':
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
    printf("\n(A) Ingrese dos palabras\n");
    printf("(B) Mostrar resultados\n");
    printf("(C) Salir\n");
    printf("Ingrese la opcion elegida: ");
    fflush(stdin);
    scanf("%c",&opcionElegida);
    opcionElegida = toupper(opcionElegida);
    printf("\nOpcion elegida: %c\n",opcionElegida);

    return opcionElegida;
}