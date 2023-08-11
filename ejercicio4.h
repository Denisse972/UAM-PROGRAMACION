#ifndef E4
#define E4
#include <stdio.h>

void calculadora() {
    int opcion = 0;
    int num1;
    int num2;
    int suma;
    int resta;
    int division;
    int multiplicacion;
    
    
    do{
        printf("MENU\n");
        printf("1. Suma \n");
        printf("2. Resta \n");
        printf("3. Division \n");
        printf("4. Multiplicacion\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
	    scanf("%d", &opcion);
        switch (opcion)
        {
       		case 1: 
       			printf("Ingresa un numero: \n");
    			scanf("%d", &num1);
    
			    printf("Ingresa un numero: \n");
			    scanf("%d", &num2);
			
			    suma = (num1 + num2);
       			printf("El resultado de la suma es: %d \n", suma);
       			break;
       			
       		case 2: 
       			printf("Ingresa un numero: \n");
    			scanf("%d", &num1);
    
			    printf("Ingresa un numero: \n");
			    scanf("%d", &num2);
			
			    resta = (num1 - num2);
       			printf("El resultado de la resta es: %d \n", resta);
       			break;
            case 3: 
                printf("Ingresa un numero: \n");
                scanf("%d", &num1);
                    
                printf("Ingresa un numero: \n");
                scanf("%d", &num2);
                            
                division = (num1 / num2);
                printf("El resultado de la division es: %d \n", division);
                break;
            case 4: 
       			printf("Ingresa un numero: \n");
    			scanf("%d", &num1);
    
			    printf("Ingresa un numero: \n");
			    scanf("%d", &num2);
			
			    multiplicacion = (num1 * num2);
       			printf("El resultado de la multiplicacion es: %d \n", multiplicacion);
       			break;
            case 5:
                printf("Estas saliendo del programa \n");
                break;
            default:
			    printf("Opcion invalida \n");
			    break;
         }
    }while(opcion != 5);
}
#endif