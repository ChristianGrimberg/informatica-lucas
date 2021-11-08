/*
    AUTOR: Lucas Carbonell
	COMISION: 1ro 54

	E19: Hacer un programa que mediante un menu de opciones realice las siguientes acciones:
        a.	Ingresar los siguientes datos de un stock de materiales compuesto de 100 articulos:
            Codigo (Segun el indice), Descripcion (30 caracteres),
            Cantidad (Pueden ser negativa) y Precio Unitario.
        b.	Calcular el monto de cada articulo y mostrar el capital actual del Stock.
        c.	Buscar los datos de un articulo determinado por su nombre (Descripcion),
            y mostrar a todos los datos incluyendo el monto.
        d.	Hacer los listados de los articulos existentes y faltantes, por separado,
            mostrar a todos los datos.
        X.  Salir del programa.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define ARTICULOS 3
#define DESCRIPCION 30

char menu();

main()
{
    int codigos[ARTICULOS];
    char descripciones[DESCRIPCION][ARTICULOS];
    int cantidadades[ARTICULOS];
    float preciosUnitarios[ARTICULOS];
    float montos[ARTICULOS];
    char opcion = '\0';
    char inicializado = 'n';
    char calculado = 'n';
    char articuloBuscado[DESCRIPCION];
    int indiceEncontrado = -1;
	
	while(opcion != 'X')
	{
        opcion = menu();

		switch(opcion)
		{
            case 'A':
                for(int i = 0; i < ARTICULOS; i++)
                {
                    codigos[i] = i;
                    printf("Ingrese la descripcion del articulo %i: ",i+1);
                    fflush(stdin);
                    setbuf(stdin, NULL);
                    scanf("%s",&descripciones[i]);
                    printf("Ingrese la cantidad: ");
                    scanf("%i",&cantidadades[i]);
                    printf("Ingrese el precio unitario: ");
                    scanf("%f",&preciosUnitarios[i]);
                }
                inicializado = 's';
                break;
            case 'B':
                if(inicializado == 's')
                {
                    printf("Calculo del monto y stock disponible por articulo\n");
                    printf("Codigo\tDescripcion\t\tPrecio\tStock\tMonto\n");
                    for(int i = 0; i < ARTICULOS; i++)
                    {
                        montos[i] = cantidadades[i] * preciosUnitarios[i];
                        printf("%i\t%s\t\t%.2f\t%i\t%.2f\n",codigos[i],descripciones[i],preciosUnitarios[i],cantidadades[i],montos[i]);
                    }

                    calculado = 's';
                }
                else
                {
                    printf("No se han cargado los articulos\n");
                }
                break;
            case 'C':
                if(inicializado == 's' && calculado == 's')
                {
                    printf("Ingrese la descripcion del articulo buscado: ");
                    fflush(stdin);
                    setbuf(stdin, NULL);
                    scanf("%s",articuloBuscado);

                    for(int i = 0; i < ARTICULOS; i++)
                    {
                        if(strcmp(articuloBuscado,descripciones[i]))
                        {
                            indiceEncontrado = i;
                        }
                        else
                        {
                            indiceEncontrado = -1;
                        }
                    }

                    if(indiceEncontrado != -1)
                    {
                        printf("%i\t%s\t\t%.2f\t%i\t%.2f\n",
                            codigos[indiceEncontrado],
                            descripciones[indiceEncontrado],
                            preciosUnitarios[indiceEncontrado],
                            cantidadades[indiceEncontrado],
                            montos[indiceEncontrado]);
                    }
                }
                else
                {
                    printf("No se han cargado o calculado los articulos\n");
                }
                break;
            case 'D':
                if(inicializado == 's' && calculado == 's')
                {
                    printf("Detalle de Articulos con stock\n");
                    printf("Codigo\tDescripcion\t\tPrecio\tStock\tMonto\n");
                    for(int i = 0; i < ARTICULOS; i++)
                    {
                        if(montos[i] != 0)
                        {
                            printf("%i\t%s\t\t%.2f\t%i\t%.2f\n",codigos[i],descripciones[i],preciosUnitarios[i],cantidadades[i],montos[i]);
                        }
                    }

                    printf("Detalle de Articulos sin stock\n");
                    printf("Codigo\tDescripcion\t\tPrecio\tStock\tMonto\n");
                    for(int i = 0; i < ARTICULOS; i++)
                    {
                        if(montos[i] == 0)
                        {
                            printf("%i\t%s\t\t%.2f\t%i\t%.2f\n",codigos[i],descripciones[i],preciosUnitarios[i],cantidadades[i],montos[i]);
                        }
                    }
                }
                else
                {
                    printf("No se han cargado o calculado los articulos\n");
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
    printf("(A) Ingresar articulos\n");
    printf("(B) Calcular articulos\n");
    printf("(C) Buscar articulo por descripcion\n");
    printf("(D) Mostrar articulos\n");
    printf("(X) Salir\n");
    printf("Ingrese la opcion elegida: ");
    fflush(stdin);
    setbuf(stdin, NULL);
    scanf("%c",&opcionElegida);
    opcionElegida = toupper(opcionElegida);
    printf("\nOpcion elegida: %c\n",opcionElegida);

    return opcionElegida;
}
