#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

struct Equipo{
    char codigo[20];
    char nombre[50];
    char marca[20];
    float precio;
    char estado[40];
};

void mostrarReporte(struct Equipo *equipo){
    system("cls");
    printf("\n*-*-*-* EQUIPO REGISTRADO *-*-*-*\n");
    printf("\nCodigo: %s", equipo->codigo);
    printf("\nNombre: %s", equipo->nombre);
    printf("\nMarca: %s", equipo->marca);
    printf("\nPrecio: %.2f", equipo->precio);
    printf("\nEstado: %s", equipo->estado);
}