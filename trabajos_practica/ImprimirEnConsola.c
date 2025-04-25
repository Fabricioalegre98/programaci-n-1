#include <stdio.h>

int main() {
    int edad=20;
    int altura=180;
    float peso=70.0;
    char nombre[20];
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Hola %s, usted tiene %d años, peso %.2f y altura %d.\n", nombre, edad, peso, altura);
    return 0;
}