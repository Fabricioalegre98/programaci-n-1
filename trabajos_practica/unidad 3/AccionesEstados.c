#include <stdio.h>
#include <unistd.h>

    void EjecutarProceso() {   
        printf("Ejecutando proceso...\n");
        sleep(2); // Simula un proceso que toma tiempo
        printf("Proceso ejecutado.\n");
    }
    int main() {
        printf("Estado: NUEVO - Creando Proceso...\n");
        sleep(1); // Simula un proceso que toma tiempo
        printf("Estado: LISTO - esperando ejecucion de CPU...\n");
        sleep(1);
        printf("Estado: EJECUCION - El proceso esta corriendo...\n");
        sleep(2);
        printf("Estado: ESPERA - el proceso esta esperando esta esperando entrada del usuario...\n");
        char input;
        printf("Presione 'e' para continuar o 'q' para salir: ");
        scanf(" %c", &input); // Captura un carácter del usuario
        return 0;
 }
