#include <stdio.h>

int main(){

    int materias;
    float promedio = 0;
    int i = 0;
    char calificacionfinal;

    printf("Cuantas asignaturas tienes? \n");
    scanf("%d", &materias);

    char nombre[materias][30];
    int calificacion[materias];

    while(i < materias){
        printf("Ingresa el nombre de la materia: \n");
        scanf("%s",nombre[i]);
        printf("Ingresa la calificacion de la materia (Del 0 al 100): \n");
        scanf("%d", &calificacion[i]);
        promedio += calificacion[i];
        i++;
    }
    promedio = promedio / materias;

    if(promedio >= 90){
        calificacionfinal = 'A';
    }else if(promedio >= 80){
        calificacionfinal = 'B';
    }else if(promedio >= 70){
        calificacionfinal = 'C';
    }else if(promedio >= 60){
        calificacionfinal = 'D';
    }else if(promedio < 60){
        calificacionfinal = 'F';
    }
    
    printf("Tu promedio es: %.1f\n", promedio);
    printf("Tu calificacion es: %c\n", calificacionfinal);
    
    return 0;
}