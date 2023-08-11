#ifndef E1
#define E1
#include <stdio.h>

void sumasPares() {
	int n;
	int m;
	int suma = 0;
	
	printf("Ingrese un numero entero: \n");
	scanf("%d", &n);
	
	printf("Ingrese un numero entero: \n");
	scanf("%d", &m);

    while (n <= m){
		if ( n % 2 == 0){
			suma += n;
			printf("%d", n);
			
			if(n == m){
				printf(" = ");
			}
			else {
				printf(" + ");
			}
		}
		
		n = n + 1;
	}
	printf("%d \n", suma);
	
}
#endif