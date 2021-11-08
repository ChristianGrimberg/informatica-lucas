/*
	AUTOR: Lucas Carbonell
	COMISION: 1ro 54
	
	E4: Diseñar el algoritmo necesario para que,
	habiendose leido el valor de 2 variables NUM1 y NUM2
	se intercambien los valores de las mismas,
	es decir que el valor que tenia NUM1
	ahora lo contenga NUM2 y viceversa.
*/
#include <stdio.h>
#include <stdlib.h>

main(){
	int NUM1, NUM2, auxiliar;
	
	printf("ingrese NUM1: ");
	scanf("%i",&NUM1);
	
	printf("ingrese NUM2: ");
	scanf("%i",&NUM2);
	
	printf("NUM1: %i NUM2: %i",NUM1,NUM2);
	
	auxiliar=NUM1;
	NUM1=NUM2;
	NUM2=auxiliar;
	
	printf("\nNUM1: %i NUM2: %i",NUM1,NUM2);

	system("pause"); //getchar();
}
