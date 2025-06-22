#include <stdio.h>

int main() {
	int cantidad;
	int i;
	float nota,suma=0,promedio;
	float max=-1,min=101;
	do{
		printf("Ingrese la cantidad de estudiante: ");
		scanf("%d", &cantidad);
		if(cantidad<=0){
		printf("error, el numero debe ser positivo \n");
		}
		
	} while(cantidad<=0);
	
	for(i=0 ; i<cantidad ; i++){
		do{
			printf("Ingrese la calificacion del estudiante %d: ",i+1);
			scanf("%f", &nota);
			
			if(nota<0 || nota>100){
				printf("Error: la calificacion esta fuera del rango [0 y 100]\n");
				
			}
			suma+=nota;
			
			
		} while(nota<0 || nota>100);
		if(nota>max){
			max=nota;
		}
		if(nota<min){
			min=nota;
			
		}
		
	}
		promedio=suma/cantidad;
		printf("El promedio es: %.2f\n", promedio);
		printf("La nota maxima es:%.2f\n",max);
		printf("La nota minima es:%.2f\n",min);
		
		
		
		
		
		
		
	return 0;

}

