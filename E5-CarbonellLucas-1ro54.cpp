/*
	AUTOR: Lucas Carbonell
	COMISION: 1ro 54
	
	E5: Ingresar la marca y el kilometraje de un vehiculo,
	mostrar el mensaje "Realizar el control tecnico",
	si el kilometraje es mayor 10000.
*/
#include <stdio.h>
#include <stdlib.h>

main(){
	char marca[15];
	float kilometraje;
	
	printf("MARCA: ");
	scanf("%s",&marca[0]);
	
	printf("KILOMETRAJE: ");
	scanf("%f",&kilometraje);
	
	if(kilometraje>10000) {
		
		printf("Realizar el control tecnico");
	}

	system("pause"); //getchar();
}
