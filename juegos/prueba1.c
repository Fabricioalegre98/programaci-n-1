#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, adivina, intentos = 0;

    // Inicializa el generador de números aleatorios
    srand(time(0));
    numero = rand() % 100 + 1; // Número aleatorio entre 1 y 100

    printf("Adivina el numero entre 1 y 100:\n");

    do {
        printf("Introduce tu intento: ");
        scanf("%d", &adivina);
        intentos++;

        if (adivina < numero) {
            printf("Muy bajo. Intenta de nuevo.\n");
        } else if (adivina > numero) {
            printf("Muy alto. Intenta de nuevo.\n");
        } else {
            printf("¡Felicidades! Adivinaste el numero en %d intentos.\n", intentos);
        }
    } while (adivina != numero);

    return 0;
}