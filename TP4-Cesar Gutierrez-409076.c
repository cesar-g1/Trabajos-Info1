#include <stdio.h>

int main() {
	int nota;
	
	printf("Ingrese la nota de su examen: ");
	scanf("%d", &nota);
	
	if(nota>=90){
		printf("Calificacion: A");
		
	}else if(nota>=80 && nota<90){
		printf("Calificacion: B");
	}else if(nota>=70 && nota<80){
		printf("Calificacion: C");
	}else if(nota>=60 && nota<70){
		printf("Calificacion: D");
	}else{
		printf("Calificacion: F");
	}
	
	
	return 0;
}

