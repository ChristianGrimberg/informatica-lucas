#include <stdio.h>
#include <stdlib.h>
// Se leen tres datos que representan: el nombre, sueldo b�sico y antig�edad de un empleado. Se solicita imprimir el nombre y el sueldo a cobrar.
// Este sueldo a cobrar, se calcula adicionando al b�sico el 35% del mismo, si la antig�edad supera los 10 a�os.
float BaseDelSueldo(float basico, int antiguedad);
main(){
	char nombre[15];
	float sueldobasico;
	int antiguedad;
	float resultado;
	
	printf("nombre: ");
	scanf("%s",&nombre[0]);
	printf("sueldo basico:");
	scanf("%f",&sueldobasico);
	printf("antiguedad: ");
	scanf("%i",&antiguedad);
	
	resultado=BaseDelSueldo(sueldobasico, antiguedad);
	printf("resultado %f",resultado);
	
	
}
float BaseDelSueldo(float basico, int antiguedad){
	float sueldo;
	if(antiguedad>10){
		sueldo=basico*1.35;
		
		
	}
	else{
	     sueldo=basico;
	     
	}
	return sueldo;
}
