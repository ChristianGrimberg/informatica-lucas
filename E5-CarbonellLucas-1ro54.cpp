//Ingresar la marca y el kilometraje de un vehículo,   mostrar el mensaje "Realizar el control técnico", si el kilometraje es mayor 10000.
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
}
