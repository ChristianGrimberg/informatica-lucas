/*
	AUTOR: Lucas Carbonell
	COMISION: 1ro 54
	
	E8: Se debe ingresar un numero entero,
	debiendose indicar si dicho numero es par o impar.
*/
#include <stdio.h>
#include <stdlib.h>

void TipoDeNumero(int numero);

main(){
	int numero;
	
	printf("ingrese un numero: "); 
	scanf("%i",&numero);
	TipoDeNumero(numero);

	system("pause"); //getchar();
}

void TipoDeNumero(int numero){
	if(numero%2==0){
		printf("es un numero par");
	}	
	else{
		printf("es un numero impar");
	}
}
