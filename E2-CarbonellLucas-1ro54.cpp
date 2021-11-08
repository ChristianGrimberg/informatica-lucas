/*
    E2: Ingresar 3 numeros y mostrarlos (uno al lado del otro y uno debajo del otro)
*/
#include <stdio.h>
#include <stdlib.h>

main() {
    int numeroUno;
    int numeroDos;
    int numeroTres;

    printf("Ingrese el primer numero: ");
    scanf("%i",&numeroUno);
    printf("ingrese el segundo numero: ");
    scanf("%i",&numeroDos);
    printf("ingrese el tercer numero: ");
    scanf("%i",&numeroTres);
    printf("%i %i %i",numeroUno,numeroDos,numeroTres);
    printf("\n%i\n%i\n%i\n",numeroUno,numeroDos,numeroTres);
    system("pause"); //getchar();
}
