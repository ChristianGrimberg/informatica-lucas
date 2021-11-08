/*
  AUTOR: Lucas Carbonell
  COMISION: 1ro 54

  E3: De un alumno del curso de ingreso a la UTN
  se ingresan las notas obtenidas en los examenes
  de las 3 materias que lo forman. 
  
  Calcular el promedio del alumno y mostrarlo por pantalla.
*/
#include <stdio.h>
#include <stdlib.h>

main(){
  float notas[3];
  float promedio;


  printf("nota 1: ");
  scanf("%f",&notas[0]);

  printf("nota 2: ");
  scanf("%f",&notas[1]);

  printf("nota 3: ");
  scanf("%f",&notas[2]);

  promedio=(notas[0]+notas[1]+notas[2])/3.0;
  printf("promedio: %f\n", promedio);
  system("pause"); //getchar();
}
