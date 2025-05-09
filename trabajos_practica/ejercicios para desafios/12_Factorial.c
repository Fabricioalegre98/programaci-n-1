#include <stdio.h>

int main() {
    int n;

    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &n);

    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("El factorial de %d es: %d\n", n, factorial);

    return 0;
}