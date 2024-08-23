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
int *bloque00 = malloc(4*sizeof(int));  //asignacion de vector tamaño int 4
int *puntero = malloc(15*sizeof(*puntero));  //asignacion de vector tamaño int 15)

//bucle para llenar espacios
for(int i = 0; i < 4; i++){
  bloque00[i] = i*2;
  printf("Valor de la memoria reservada de bloque00[%d] = %d\n", i, bloque00[i]);
}
if(puntero!=NULL){
  *(puntero+8) = 9889;
  printf("El valor de la 9na posicion del puntero es %d \n" , *(puntero+8));
  printf("El valor de la 9na posicion del puntero es %d \n" , puntero[8]);
}

//liberacio de memoria
free(bloque00);
free(puntero);
  return 0;
}