#include <stdio.h>

#define PI 3.14159 // Definicion de una constante

int main() {
    const float gravedad = 9.81; // Definicion de una constante
    float radio=5.0;

    //calculamos el area de una circulo con pi

    float area = PI * radio * radio; // Area de un circulo
    printf("El area de un circulo de radio %.2f es: %.2f\n", radio, area);
    printf("Gravedad: %.2f\n", gravedad);
    
    return 0;
}