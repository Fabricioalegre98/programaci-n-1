#include <stdio.h>

int main() {
    int num1, num2;

    printf("Ingrese el primer numero:");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero:");
    scanf("%d", &num2);

    if (num2 != 0) {
        printf("La division de %d y %d es : %d\n", num1, num2, num1 / num2);
    } else {
        printf("Error: Division por cero no permitida.\n");
    }

    return 0;
}