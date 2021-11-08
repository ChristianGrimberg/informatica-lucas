/*
    AUTOR: Lucas Carbonell
	COMISION: 1ro 54

	E21: Se debe hacer un programa que nos permita averiguar el valor de X
    (que va a ir del 1 al 30 y de 3 en 3), con las funciones trigonométricas
    que nos permitan calcular el coseno, el seno y la tangente.
    Para ello se debe realizar un menú de opciones que nos permita mostrar en columnas:
        a.	El valor de X y el coseno.
        b.	El valor de X y el seno.
        c.	El valor de X y la tangente.
        d.	El valor de X y el resultado de la suma del seno más el coseno y más la tangente.
        e.	Salir del programa.

*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

char menu();

main()
{
    char opcion = '\0';
    float resultado;
	
	while(opcion != 'X')
	{
        opcion = menu();

		switch(opcion)
		{
            case 'A':
            case 'B':
            case 'C':
            case 'D':
                for (int i = 0; i <= 30; i = i + 3)
                {
                    switch (opcion)
                    {
                        case 'A':
                            resultado = cos((double)i);
                            break;
                        case 'B':
                            resultado = sin((double)i);
                            break;
                        case 'C':
                            resultado = tan((double)i);
                            break;
                        case 'D':
                            resultado = cos((double)i) + sin((double)i) + tan((double)i);
                            break;
                    }
                    printf("El resultado del angulo %i es %.2f\n",i,resultado);
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
    printf("(A) Valor de X y el coseno de 0 a 30 grados\n");
    printf("(B) Valor de X y el seno de 0 a 30 grados\n");
    printf("(C) Valor de X y la tangente de 0 a 30 grados\n");
    printf("(D) Valor de X y la suma de las funciones anteriores de 0 a 30 grados\n");
    printf("(X) Salir\n");
    printf("Ingrese la opcion elegida: ");
    fflush(stdin);
    setbuf(stdin, NULL);
    scanf("%c",&opcionElegida);
    opcionElegida = toupper(opcionElegida);
    printf("\nOpcion elegida: %c\n",opcionElegida);

    return opcionElegida;
}
