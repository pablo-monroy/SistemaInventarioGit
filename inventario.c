#include<stdio.h>

int main(){
    int op;

    do{
        printf("\n*-*-*-* Sistema inventario con git *-*-*-*\n");
        printf("\n1.Registrar equipo");
        printf("\n2.Mostrar equipo registrado");
        printf("\n3.Modificar equipo");
        printf("\n4.Eliminar equipo");

        printf("\nSelecione una opcion: ");
        scanf("%d", &op);

    } while (op != 5);

    return 0;
}