/*****************************************************
*Fecha: 23/08/2024
*Autor: Sebastian Angulo
*Materia: Sistemas Operativos
*Tema: Gestión de Memoria 
*Topico: Reserva y redimensionamiento de memoria con función realloc().
*Descripción: La función realloc cambia el tamaño de un bloque de memoria 
* previamente asignado con malloc, calloc o realloc.
********************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaración de variables y punteros
    int *bloque00 = malloc(4 * sizeof(int));  // Asignación de vector tamaño int 4

    if (bloque00 == NULL) {
        printf("Error en la asignación de memoria\n");
        return 1;
    }

    // Bucle para llenar los espacios iniciales
    for (int i = 0; i < 4; i++) {
        bloque00[i] = i * 2;
        printf("Valor de la memoria reservada de bloque00[%d] = %d\n", i, bloque00[i]);
    }

    // Redimensionar el bloque de memoria con realloc
    int nuevo_tamaño = 8;
    int *nuevo_bloque = realloc(bloque00, nuevo_tamaño * sizeof(int));

    if (nuevo_bloque == NULL) {
        printf("Error en la redimensionación de memoria\n");
        free(bloque00);  // Liberar la memoria original si realloc falla
        return 1;
    }

    // Asignar valores a la nueva memoria y mostrar los contenidos
    for (int i = 4; i < nuevo_tamaño; i++) {
        nuevo_bloque[i] = i * 3;
    }

    for (int i = 0; i < nuevo_tamaño; i++) {
        printf("Valor de la memoria reservada de nuevo bloque[%d] = %d\n", i, nuevo_bloque[i]);
    }

    // Liberación de memoria
    free(nuevo_bloque);

    return 0;
}
