#include <stdio.h>
#include <conio.h>

int main() {
    char nombre[50];  // Cadena para el nombre (máximo 49 caracteres + '\0')
    char apellido[50]; // Cadena para el apellido (máximo 49 caracteres + '\0')
    int i;

    // Ingresar el nombre carácter por carácter
    printf("Ingrese su nombre carácter por carácter (finalice con ENTER):\n");
    i = 0;
    while (i < 49) { // Limitar a 49 caracteres para evitar desbordamiento
        nombre[i] = getch(); // Leer un carácter
        if (nombre[i] == '\r') { // Si se presiona ENTER (carácter '\r' en Windows)
            nombre[i] = '\0'; // Finalizar la cadena
            break;
        }
        printf("%c", nombre[i]); // Mostrar el carácter ingresado
        i++;
    }
    nombre[i] = '\0'; // Asegurar el carácter nulo al final

    // Ingresar el apellido carácter por carácter
    printf("\nIngrese su apellido carácter por carácter (finalice con ENTER):\n");
    i = 0;
    while (i < 49) { // Limitar a 49 caracteres para evitar desbordamiento
        apellido[i] = getch(); // Leer un carácter
        if (apellido[i] == '\r') { // Si se presiona ENTER (carácter '\r' en Windows)
            apellido[i] = '\0'; // Finalizar la cadena
            break;
        }
        printf("%c", apellido[i]); // Mostrar el carácter ingresado
        i++;
    }
    apellido[i] = '\0'; // Asegurar el carácter nulo al final

    // Mostrar el nombre y apellido ingresados
    printf("\n\nNombre ingresado: %s\n", nombre);
    printf("Apellido ingresado: %s\n", apellido);

    getch();
    return 0;
}