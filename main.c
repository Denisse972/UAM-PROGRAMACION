#include <stdio.h>
#include "ejercicio1.h"
#include "ejercicio2.h"
#include "ejercicio3.h"
#include "ejercicio4.h"

int main(){
    int opcion;

    do
    {
        printf("Mi primera practica :)");
        printf("\nMenu\n");
        printf("1 - Mostrar la suma de numeros pares\n");
        printf("2 - Invertir elementos de un vector\n");
        printf("3 - Verificar si es numero primo\n");
        printf("4 - Calculadora\n");
        printf("5 - Salir\n");
        printf("Ingresa la opcion que desea: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            sumasPares();
            break;
        case 2:
            invertirElVector();
            break;
        case 3:
            CorroborarSiEsPrimo();
            break;
        case 4:
            calculadora();
            break;
        case 5:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opcion Invalida\n");
            break;
        }
    } while (opcion != 5);

    return 0;
}