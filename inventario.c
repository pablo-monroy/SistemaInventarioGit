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