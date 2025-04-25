#include <stdio.h> //libreria de entrada y salida
#include <math.h> //libreria de funciones matematicas

//declaracion de funciones
void CalcularAreaCirculo(float, float);

//funcion principal(punto de entrada del programa)
int main() {

    //declaracion de variables
    float radio, area, pi = 3.14159; //pi es una constante

    //entrada de datos
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio); //se lee el radio desde la entrada estandar

    //llamada a la funcion para calcular el area
    CalcularAreaCirculo(radio, pi);

    return 0; //fin del programa
}

void CalcularAreaCirculo(float, float)
{
}
