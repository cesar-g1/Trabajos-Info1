include <stdio.h>

int main() {
		
	int peso;
	float altura;
	float bmi;
	do{
		
		printf("Ingrese su peso: ");
		scanf("%d", &peso);
		if(peso<=0){
			printf("Error: el peso debe ser positivo.Intente nuevamente\n");
		}
	}while(peso<=0);

	do{
		printf("Ingrese su altura: ");
		scanf("%f", &altura);
		if(altura<=0){
			printf("Error: la altura debe ser positivo.Intente nuevamente\n");
		}
	}while(altura<=0);
	
	bmi=peso/(altura*altura);
	
	printf("Su indice de masa corporal es: %2.f\n ",bmi);
		printf("\nÍndice | Condición\n");
		printf("------------------------------\n");
		printf("<18.5  | Bajo peso\n");
		printf("18.5 - 24.9 | Normal\n");
		printf("25.0 - 29.9 | Sobrepeso\n");
		printf(">=30   | Obesidad\n");
	
	printf("\nSu condición según el BMI es: ");
	if (bmi < 18.5) {
		printf("Bajo peso\n");
	} else if (bmi < 25.0) {
		printf("Normal\n");
	} else if (bmi < 30.0) {
		printf("Sobrepeso\n");
	} else {
		printf("Obesidad\n");
	}
	
		
		return 0;
	
}
	

