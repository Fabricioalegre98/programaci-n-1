#include <stdio.h>
#include <math.h>


int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        if (numero % 2 == 0) {
            printf("%d es par.\n", numero);
        } else {
            printf("%d es impar.\n", numero);
        }
    } else if (numero < 0) {
        printf("%d es negativo.\n", numero);
    } else {
        printf("El número es cero.\n");
    }
    return 0;
}