#include <stdio.h>

int main() {
    int arreglo[10]; // Arreglo de 10 elementos
    int matriz[3][3]; // Matriz de 3x3
    int i, j, k = 0;

    // Cargar el arreglo con valores
    printf("Ingrese 10 numeros para el arreglo:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    // Cargar la matriz con los primeros 9 elementos del arreglo
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = arreglo[k];
            k++;
        }
    }

    // Mostrar la matriz
    printf("\nLa matriz 3x3 es:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}