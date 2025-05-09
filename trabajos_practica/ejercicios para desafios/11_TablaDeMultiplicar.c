#include <stdio.h>

int main() {
    int n;

    printf("Ingrese un número para mostrar su tabla de multiplicar: ");
    scanf("%d", &n);

    printf("Tabla de multiplicar del %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}