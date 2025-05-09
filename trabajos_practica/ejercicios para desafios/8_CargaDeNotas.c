#include <stdio.h>

int main() {
    int numNotas, i;
    float nota, sumaNotas = 0.0, promedio;

    printf("Ingrese el número de notas: ");
    scanf("%d", &numNotas);

    // Validar que el número de notas sea positivo

    for (i = 1; i <= numNotas; i++) {
        printf("Ingrese las notas %d: ", i);
        scanf("%f", &nota);
        sumaNotas += nota;
    }

    promedio = sumaNotas / numNotas;

    printf("El promedio de las notas es: %.2f\n", promedio);

    return 0;
}