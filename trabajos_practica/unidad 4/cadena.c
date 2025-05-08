#include <stdio.h>
#include <conio.h>

int main() {
    char cadena[5]={'h','o','l','a','\0'}; // Cadena de 5 caracteres
    //char cadena[5]; // Cadena de 5 caracteres
    char cad1[5]; // Cadena de 5 caracteres
    int i;
    printf("La cadena es: %s\n", cadena);

    // Imprimir cada caracter de la cadena
    i=0;
    while (i<5){
        
        cad1[i]='\0'; // Inicializar el caracter en la cadena
        printf("introduzca un caracter: ");
        cad1[i]=getch(); // Leer un caracter de la entrada estándar
        i++;
    }
    printf("La cadena ingresada es: %s\n", cad1);
    getch();
    return 0;
}