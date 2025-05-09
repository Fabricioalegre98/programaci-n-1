#include <stdio.h>

int main() {
    int num1, num2, num3, promedio;

    printf("Ingrese tres numeros para calcular el promedio:\n");
    printf("1. El primer numero: ");
    scanf("%d", &num1);
    printf("2. El segundo numero: ");
    scanf("%d", &num2);
    printf("3. El tercer numero: ");
    scanf("%d", &num3);

    promedio = (num1 + num2 + num3) / 3;
    printf("El promedio es: %d\n", promedio);

    return 0;
}