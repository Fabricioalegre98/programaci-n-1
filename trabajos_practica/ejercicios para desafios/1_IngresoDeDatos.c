#include <stdio.h>

int main(){

    char nombre[20];
    int edad;
    int altura;
    printf("ingrese su nombre: ");
    scanf("%s", nombre);
    printf("ingrese su edad: ");
    scanf("%d", &edad);
    printf("ingrese su altura: ");
    scanf("%d", &altura);
    printf("Hola %s, tu edad es %d y tu altura es %d", nombre, edad, altura);

    return 0;
}