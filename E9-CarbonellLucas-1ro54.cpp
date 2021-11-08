/*
	E9: Se leen tres numeros, A, B, y C.
	Se pide escribir el mayor de ellos.
*/
#include <stdio.h>
#include <stdlib.h>

void MayorDeTres(int numero1, int numero2, int numero3 );

main(){
	int A,B,C;
	
	printf("ingrese numero A: ");
	scanf("%i",&A);
	printf("ingrese numero B: ");
	scanf("%i",&B);
	printf("ingrese numero C: ");
	scanf("%i",&C);
	MayorDeTres(A,B,C);
	
	system("pause"); //getchar();
}

void MayorDeTres(int numero1, int numero2, int numero3 ){
	if(numero1>numero3 && numero1>numero2){
		printf("el mayor es el valor de A");
	}
	else{
		if(numero2>numero1 && numero2>numero3){
			printf("el mayor es el valor de B");
		}
		else{
			if(numero3>numero1 && numero3>numero2){
				printf("el mayor es el valor de C");
			}
			else{ 
				printf("los numeros son todos iguales");
			}
			
		}
	}
}


