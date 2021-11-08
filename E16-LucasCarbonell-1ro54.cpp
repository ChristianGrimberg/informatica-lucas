/*
	AUTOR: Lucas Carbonell
	COMISION: 1ro 54

	E16. Pedir al operador que ingrese 20 numeros enteros mayores a 15,
	mostrar por pantalla, la suma, el promedio,
	la cantidad de numeros pares y la cantidad de n�umeros impares ingresados.
*/

#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 5

main()
{
	float suma=0;
	float promedio;
	int cpar=0; //Contador de los numeros pares
	int cimpar=0; //Contador de los numeros impares
	int numero;
	int contador=0;
	
	for(contador=0; contador<CANTIDAD; contador=contador+1)	
	{
		printf("Ingresar un Nro:\t");
		scanf("%i", &numero);

		if(numero>15)
		{
			suma=suma+numero;
			if(numero%2==0)
			{
				cpar=cpar+1;
			}
			else
			{
				cimpar=cimpar+1;
			}
		}
		else
		{
			contador=contador-1;
		}
	}
	promedio=suma/CANTIDAD;

	printf("Cantidad de Nros. Pares:\t%i", cpar);
	printf("Cantidad de Nros. Impares:\t%i", cimpar);
	printf("Suma:\t%f", suma);
	printf("Promedio:\t%f", promedio);
	printf("\n");
    //system("pause");
}
