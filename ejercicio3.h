#ifndef __MY_LIB_H
#define __MY_LIB_H
#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int valor){
    return valor%2 == 0;
}

void CorroborarSiEsPrimo (){
    int valor;

    printf("Ingresa el numero entero: ");
    scanf("%i", &valor);

    printf("%s" , esPrimo(valor) ? "FALSO\n" : "VERDADERO\n");

}

#endif