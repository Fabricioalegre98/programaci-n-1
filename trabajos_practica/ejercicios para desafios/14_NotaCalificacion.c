#include <stdio.h>
//El programa debe pedir,  hasta que el usuario indique que ya no debe ingresar más notas, una nota (0-100) e indicar la calificación: 
// 90-100: Sobresaliente
// 80-89: Muy Bueno
// 70-79: Bueno
// 60-69: Aprobado
// Menos de 60: Reprobado


int main() {
    int nota;
    int calificacion;
    int sobresaliente = 4;
    int muy_bueno = 3;
    int bueno = 2;
    int aprobado = 1;

    printf("Ingrese una nota: ");
    scanf("%d", &nota);

    if (nota >= 90) {
        calificacion = 4;
    } else if (nota >= 80) {
        calificacion = 3;
    } else if (nota >= 70) {
        calificacion = 2;
    } else if (nota >= 60) {
        calificacion = 1;
    } else {
        calificacion = 0;
    }

    printf("La calificacion es: ");
    // Se utiliza la variable calificacion para determinar el resultado
    if (calificacion == sobresaliente) {
        printf("Sobresaliente\n");
    } else if (calificacion == muy_bueno) {
        printf("Muy Bueno\n");
    } else if (calificacion == bueno) {
        printf("Bueno\n");
    } else if (calificacion == aprobado) {
        printf("Aprobado\n");
    } else {
        printf("Reprobado\n");
    }
    return 0;
}