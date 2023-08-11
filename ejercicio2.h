#ifndef E2
#define E2
#include <stdio.h>

void invertirElVector(){
	int tamano;
	int valor;
	
	printf("¿De cuantos espacios quieres el vector? \n");
	scanf("%i", &tamano);
	
	int vector[tamano];

	for (int i = 0; i < tamano; i++){
		printf("Ingresa el valor: ");
		scanf("%i",&valor);
		vector[i]=valor;
	}
	printf("\nNormal: \n");
	for(int i = 0; i < tamano ; i++){
		printf("[%i] ",vector[i]);
	}
		printf("\n");

    int primerelemento = 0;
    int ultimoelemento = tamano - 1;

    while(primerelemento < ultimoelemento){
        int num = vector[primerelemento];
        vector[primerelemento] = vector[ultimoelemento];
        vector[ultimoelemento] = num;

        primerelemento++;
        ultimoelemento--;
    }

    printf("\nInverso: \n");
    for (int i = 0; i < tamano; i++) {
        printf("[%d] ", vector[i]);
    }
	
}
#endif