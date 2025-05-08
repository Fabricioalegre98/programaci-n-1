#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    char cadena[MAX_LENGTH];

    printf("Ingrese el párrafo (oraciones separadas por punto, palabras separadas por asterisco):\n");
    fgets(cadena, MAX_LENGTH, stdin);

    // Remover el salto de línea al final de la cadena si existe
    size_t len = strlen(cadena);
    if (len > 0 && cadena[len - 1] == '\n') {
        cadena[len - 1] = '\0';
    }

    printf("\nOraciones separadas:\n");

    char *oracion = strtok(cadena, ".");
    while (oracion != NULL) {
        // Reemplazar asteriscos por espacios en la oración actual
        for (int i = 0; oracion[i] != '\0'; i++) {
            if (oracion[i] == '*') {
                oracion[i] = ' ';
            }
        }

        printf("%s\n", oracion);
        oracion = strtok(NULL, ".");
    }

    return 0;
}