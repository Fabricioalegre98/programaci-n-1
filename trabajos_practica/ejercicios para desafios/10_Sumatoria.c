#include <stdio.h>

//El programa debe solicitar al usuario un número N y calcular la suma de los primeros N números enteros.
//Por ejemplo, si el usuario ingresa 5, la salida debe ser 1 + 2 + 3 + 4 + 5 = 15.
int main(){
    

    int n, suma = 0;
    printf("Ingrese el número N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    printf("La suma de los primeros %d números enteros es: %d\n", n, suma);

    return 0;
}