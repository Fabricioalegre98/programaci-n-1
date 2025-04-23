#include <stdio.h>

int main()
{
    int a, b;

    printf("Introduce el primer numero: ");
    scanf("%d", &a);
    printf("Introduce el segundo numero: ");
    scanf("%d", &b);

    printf("El resultado de la suma es: %d", a + b);
    printf("\nEl resultado de la resta es: %d", a - b);
    printf("\nEl resultado de la multiplicacion es: %d", a * b);

    if (b == 0) {
        printf("\nNo se puede dividir entre cero.");
    } else {
        printf("\nEl resultado de la division es: %d", a / b);
        printf("\nEl residuo de la division es: %d", a % b);
    }

    return 0;
}