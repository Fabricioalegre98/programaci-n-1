#include <stdio.h>

int main() {
    int num1, num2, suma;
    printf("Bienvenido a la suma de dos números.\n");
    int opcion;
    printf("¿Qué opción desea?\n");
    printf("1. Sumar dos números\n");
    printf("2. Salir\n");
    scanf("%d", &opcion);
    if (opcion == 1) {
        printf("Ingrese el primer número: ");
        scanf("%d", &num1);
        printf("Ingrese el segundo número: ");
        scanf("%d", &num2);
        suma = num1 + num2;
        printf("La suma es: %d\n", suma);
        printf("¿Desea realizar otra operación?\n");
        printf("1. Sumar dos números\n");
        printf("2. Salir\n");
        scanf("%d", &opcion);
    } else if (opcion == 2) {
        printf("Adiós.\n");
    } 
    return 0;
}