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

struct Equipo inventario[100];
int totalEquipos = 0;

void registrar() {
    if (totalEquipos < 100) {
        system("cls");
        printf("\n*-*-*-* REGISTRO DE EQUIPO *-*-*-*\n");

        printf("\nIngrese código: ");
        scanf("%s", inventario[totalEquipos].codigo);

        printf("\nNombre del equipo: ");
        scanf("%s", inventario[totalEquipos].nombre);

        printf("\nMarca del equipo: ");
        scanf("%s", inventario[totalEquipos].marca);

        printf("\nPrecio del equipo: ");
        scanf("%f", &inventario[totalEquipos].precio);

        printf("\nEstado del equipo: ");
        scanf("%s", inventario[totalEquipos].estado);

        printf("\nRegistrando...");
        Sleep(2500);

        system("cls");
        printf("Equipo registrado correctamente\n");

        totalEquipos++;
    } else {
        printf("Inventario lleno.\n");
    }
}

void mostrarReporte() {
    system("cls");
    printf("\n*-*-*-* EQUIPOS REGISTRADOS *-*-*-*\n");
    if (totalEquipos == 0) {
        printf("\nNo hay equipos registrados.\n");
    } else {
        for (int i = 0; i < totalEquipos; i++) {
            printf("\nCodigo: %s", inventario[i].codigo);
            printf("\nNombre: %s", inventario[i].nombre);
            printf("\nMarca: %s", inventario[i].marca);
            printf("\nPrecio: %.2f", inventario[i].precio);
            printf("\nEstado: %s\n", inventario[i].estado);
        }
    }
}

void modificarEquipo() {
    char codigo[20];
    printf("\nIngrese el código del equipo a modificar: ");
    scanf("%s", codigo);

    for (int i = 0; i < totalEquipos; i++) {
        if (strcmp(inventario[i].codigo, codigo) == 0) {
            printf("Nuevo nombre: "); scanf("%s", inventario[i].nombre);
            printf("Nueva marca: "); scanf("%s", inventario[i].marca);
            printf("Nuevo precio: "); scanf("%f", &inventario[i].precio);
            printf("Nuevo estado: "); scanf("%s", inventario[i].estado);
            printf("Equipo modificado correctamente.\n");
            return;
        }
    }
    printf("Equipo no encontrado.\n");
}

void eliminarEquipo() {
    char codigo[20];
    printf("\nIngrese el código del equipo a eliminar: ");
    scanf("%s", codigo);

    for (int i = 0; i < totalEquipos; i++) {
        if (strcmp(inventario[i].codigo, codigo) == 0) {
            for (int j = i; j < totalEquipos - 1; j++) {
                inventario[j] = inventario[j + 1];
            }
            totalEquipos--;
            printf("Equipo eliminado correctamente.\n");
            return;
        }
    }
    printf("Equipo no encontrado.\n");
}

int main() {
    struct Equipo equipo;
    int opcion;

    do {
        printf("\n--- Menu Principal ---\n");
        printf("1. Registrar equipo\n");
        printf("2. Mostrar equipo\n");
        printf("3.Modificar equipo\n");
        printf("4.Eliminar equipo");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: registrar(); break;
            case 2: mostrarReporte(); break;
            case 3: modificarEquipo(); break;
            case 4: eliminarEquipo(); break;
            case 5: printf("Saliendo...\n"); break;
            default: printf("Opción inválida.\n");
        }
    } while(opcion != 5);

    return 0;
}