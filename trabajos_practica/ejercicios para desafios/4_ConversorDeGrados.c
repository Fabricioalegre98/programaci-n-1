#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    // Conversión de Celsius a Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f grados Celsius equivalen a %.2f grados Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}