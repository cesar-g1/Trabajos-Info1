include <stdio.h>

int main() {
		
	int peso;
	float altura;
	float bmi;
	
	printf("Ingrese su peso: ");
	scanf("%d", &peso);
	printf("Ingrese su altura: ");
	scanf("%f", &altura);
	
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
	

