#include <stdio.h>

int main() {
    int num1, num2;

printf("seleccione la operacion a realizar:\n");
printf("1. Suma\n");
printf("2. Resta\n");
printf("3. Multiplicacion\n");
printf("4. Division\n");

printf("ingrese el primer numero:");
scanf("%d", &num1);
printf("ingrese el segundo numero:");
scanf("%d", &num2); 

int opcion;
printf("ingrese la opcion deseada:");
scanf("%d", &opcion);

switch (opcion) {
    case 1:
        printf("La suma de %d y %d es : %d\n", num1, num2, num1 + num2);
        break;
    case 2:
        printf("La resta de %d y %d es : %d\n", num1, num2, num1 - num2);
        break;
    case 3:
        printf("La multiplicacion de %d y %d es : %d\n", num1, num2, num1 * num2);
        break;
    case 4:
        if (num2 != 0) {
            printf("La division de %d y %d es : %d\n", num1, num2, num1 / num2);
        } else {
            printf("Error: Division por cero no permitida.\n");
        }
        break;

        default:
            printf("Opcion invalida.\n");
            break;
}

return 0;
}