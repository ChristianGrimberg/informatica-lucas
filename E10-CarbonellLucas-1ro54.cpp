/*
	AUTOR: Lucas Carbonell
	COMISION: 1ro 54
	
	E10: Se leen tres datos que representan:
	el nombre, sueldo basico y antiguedad de un empleado.
	Se solicita imprimir el nombre y el sueldo a cobrar.
	Este sueldo a cobrar, se calcula adicionando al basico el 35%
	del mismo, si la antiguedad supera los 10 años.
*/
#include <stdio.h>
#include <stdlib.h>

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
	
	system("pause"); //getchar();
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
