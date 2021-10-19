/*
E1:
	Se debe ingresar nombre, sexo, edad y porcentaje de tiempo transcurrido de este ano
	(mes actual / total meses)*100"
	Mostrar los resultados correspondientes
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(){
	char nombre[50];
	char sexo;
	int edad;
	float porcentaje;
	int mes; 
	
	printf("ingresar nombre: ");
	scanf("%s", nombre);
	__fpurge(stdin); //fflush(stdin);
	printf("sexo: ");
	scanf("%c",&sexo);
	
	printf("edad: ");
	scanf("%i",&edad);
	
	printf("mes: ");
	scanf("%i",&mes);
	
	porcentaje=(mes/12.0)*100.0;
	printf("nombre: %s \n sexo: %c\n edad: %i\n mes: %i\n porcentaje: %f\n",nombre,sexo,edad,mes,porcentaje);
	getchar(); // system("pause");
	return 0;
}
