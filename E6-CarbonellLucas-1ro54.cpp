/*
	AUTOR: Lucas Carbonell
	COMISION: 1ro 54
	
	E6: Hacer un algoritmo que calcule
	el total a pagar por la compra de camisas.
	Si se compran tres camisas o mas, se aplica
	un descuento del 20% sobre el total de la compra
	y si son menos de tres camisas un descuento del 10%.
*/
#include <stdio.h>
#include <stdlib.h>

main(){
	int cantidadDeCamisas;
	float precioCamisa;
	float total;
	float totalConDescuento;
	
	printf("precio: ");
	scanf("%f",&precioCamisa);
	
	printf("cantidad: ");
	scanf("%i",&cantidadDeCamisas);
	total=precioCamisa*cantidadDeCamisas;

	if(cantidadDeCamisas>=3){
		totalConDescuento=total*(1.00 - 0.20);
		printf("total con 20 descuento: %f",totalConDescuento);
	}
	else {
		if(cantidadDeCamisas<3){
			totalConDescuento=total*(1.00 - 0.10);
			printf("total con 10 descuento: %f",totalConDescuento);
		}
	}

	system("pause"); //getchar();
} 
