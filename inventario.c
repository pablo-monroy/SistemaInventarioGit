#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

struct Equipo {
    char codigo[20];
    char nombre[20];
    char marca[20];
    float precio;
    char estado[20];
};

void registrar(struct Equipo *equipo) {
    system("cls");
    printf("\n*-*-*-* REGISTRO DE EQUIPO *-*-*-*\n");

    printf("\nIngrese código: ");
    scanf("%s", equipo->codigo);

    printf("\nNombre del equipo: ");
    scanf("%s", equipo->nombre);

    printf("\nMarca del equipo: ");
    scanf("%s", equipo->marca);

    printf("\nPrecio del equipo: ");
    scanf("%f", &equipo->precio);

    printf("\nEstado del equipo: ");
    scanf("%s", equipo->estado);

    printf("\nRegistrando...");
    Sleep(2500);

    system("cls");
    printf("Equipo registrado correctamente\n");
}

void mostrarReporte(struct Equipo *equipo){
    system("cls");
    printf("\n*-*-*-* EQUIPO REGISTRADO *-*-*-*\n");
    printf("\nCodigo: %s", equipo->codigo);
    printf("\nNombre: %s", equipo->nombre);
    printf("\nMarca: %s", equipo->marca);
    printf("\nPrecio: %.2f", equipo->precio);
    printf("\nEstado: %s\n", equipo->estado);
}

int main() {
    struct Equipo equipo;
    int opcion;

    do {
        printf("\n--- Menu Principal ---\n");
        printf("1. Registrar equipo\n");
        printf("2. Mostrar equipo\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: registrar(&equipo); break;
            case 2: mostrarReporte(&equipo); break;
            case 3: printf("Saliendo...\n"); break;
            default: printf("Opción inválida.\n");
        }
    } while(opcion != 3);

    return 0;
}