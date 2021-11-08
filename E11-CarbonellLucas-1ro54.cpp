/*
    AUTOR: Lucas Carbonell
	COMISION: 1ro 54

    E11: Se debe hacer un programa que nos permita ingresar dos numeros y
    que mediante un menu de opciones nos permita calcular
    a una de las cuatro operaciones aritmeticas basicas y mostrar dicho resultado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char menu();

int main()
{
	float numero1 = 0;
	float numero2 = 0;
	char opcion = '\0';
	float resultado = 0;
	
	while(opcion != 'F')
	{
        opcion = menu();

		switch(opcion)
		{
			case 'A':
				printf("ingrese numero 1: ");
				scanf("%f",&numero1);
				printf("ingrese numero 2: ");
				scanf("%f",&numero2);
				break;
			case 'B':
				resultado = numero1 + numero2;
				break;
			case 'C':
				resultado = numero1 - numero2;
				break;
			case 'D':
				if(numero2 == 0)
				{
                    opcion = '\0';
                    printf("No se puede hacer esta operacion.\n");
				}
				else
				{
					resultado = numero1 / numero2;
				}
				
				break;
			case 'E':
				resultado = numero1 * numero2;
				break;
			case 'F':
				break;
			default:
				opcion = '\0';
				break;
		}
		
		if(opcion != '\0' && opcion != 'F')
		{
			printf("El resultado es: %.2f\n",resultado);
		}
		
		system("pause");
	}
	return 0;
}

char menu()
{
    char opcionElegida;

    system("cls");
    printf("\n(A) Ingresar los numeros\n");
    printf("(B) Sumar\n");
    printf("(C) Restar\n");
    printf("(D) Dividir\n");
    printf("(E) Multiplicar\n");
    printf("(F) Salir\n");
    printf("Ingrese la opcion elegida: ");
    fflush(stdin);
    scanf("%c",&opcionElegida);
    opcionElegida = toupper(opcionElegida);
    printf("\nOpcion elegida: %c\n",opcionElegida);

    return opcionElegida;
}