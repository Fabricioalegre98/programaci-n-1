#include <stdio.h>
#include <conio.h>

int main()
{
    char input[100]; // Variable para almacenar la cadena de entrada

    printf("Hola Mundo\n"); // Imprime "Hola Mundo" en una sola línea
    printf("Introduce una cadena: ");
    scanf("%99s", input); // Lee una cadena de entrada (máximo 99 caracteres)
    printf("Cadena ingresada: %s\n", input); // Imprime la cadena ingresada

    getch(); // Espera a que el usuario presione una tecla antes de cerrar
    return 0;
}