/*
	E7: Ingresar 2 numeros y realizar un menu de opciones
	para que los sume, reste o los muestre
*/
#include <stdio.h>
#include <stdlib.h>

main() {
	int opcion = 0;
	float num1,num2, resultado;
	
	while(opcion != 6) {
		system("cls");
		printf("1 - Ingrese numero 1");
		printf("\n2 - Ingrese numero 2");
		printf("\n3 - Sumar los numeros");
		printf("\n4 - Restar los numeros");
		printf("\n5 - Mostrar resultado");
		printf("\n6 - Salir");
		printf("\nOpcion deseada: ");
		scanf("%i",&opcion);
		
		switch(opcion) {
			case 1:
				printf("Numero 1: ");
				scanf("%f",&num1);
				break;
			case 2:
				printf("Numero 2: ");
				scanf("%f",&num2);
				break;
			case 3:
				resultado = num1 + num2;
				break;
			case 4:
				resultado = num1 - num2;
				break;
			case 5:
				printf("Resultado: %f\n",resultado);
				system("pause"); //getchar();
				break;
		}
	}

	printf("\nAdios");
}
