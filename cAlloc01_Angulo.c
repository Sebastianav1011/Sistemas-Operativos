/*****************************************************
*Fecha: 13/08/2024
*Autor: Sebastian Angulo
*Materia: Sistemas Operativos
*Tema: Gestion de Memoria 
*Topico: Reserva memoria con funcion malloc().
*Descripcion: a función malloc asigna un bloque de memoria de al menos size bytes.
********************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){
//decalaracion de variables y punteros
int *p1 = calloc(4, sizeof(int));  //asignacion de vector tamaño int 4
int *puntero = calloc(10, sizeof(int));
int *p3 = calloc(5, sizeof(*p3));  //asignacion de vector tamaño int 15)

//bucle para llenar espacios

printf("Construccion y calculo de la secuencia de los primeros 10 terminos\n");
for(int i = 0; i < 10; i++){
  *(puntero+i) = i;
  printf("El valor de la secuencia es %d \n" , *(puntero+i));
}

//liberacio de memoria
free(p1);
free(puntero);
free(p3);
  return 0;
}