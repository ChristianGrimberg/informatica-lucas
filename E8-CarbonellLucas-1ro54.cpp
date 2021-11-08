#include <stdio.h>
#include <stdlib.h>
//Se debe ingresar un número entero, debiéndose indicar si dicho número es par o impar.
void TipoDeNumero(int numero);


main(){
	int numero;
	
	printf("ingrese un numero: "); 
	scanf("%i",&numero);
	TipoDeNumero(numero);
	
	
	
		
}
void TipoDeNumero(int numero){
	if(numero%2==0){
		printf("es un numero par");
	}	
	else{
		printf("es un numero impar");
		
		
	}	
	
}
