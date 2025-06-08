include <stdio.h>

int main() {
		float peso, altura, bmi;
		
		// Solicita datos al usuario
		printf("Ingrese el peso en kg: ");
		scanf("%f", &peso);
		
		printf("Ingrese la altura en metros: ");
		scanf("%f", &altura);
		
		// Calcula el BMI
		bmi = peso / (altura * altura);
		
		// Muestra el resultado
		printf("\nSu índice de masa corporal es: %.2f\n", bmi);
		
		// Determina la clasificación del BMI
		printf("\nCondición: ");
		if (bmi < 18.5) {
			printf("Bajo peso\n");
		} else if (bmi >= 18.5 && bmi < 25.0) {
			printf("Normal\n");
		} else if (bmi >= 25.0 && bmi < 30.0) {
			printf("Sobrepeso\n");
		} else {
			printf("Obesidad\n");
		}
		
		// Muestra la tabla de referencia
		printf("\nÍndice | Condición\n");
		printf("------------------------------\n");
		printf("<18.5  | Bajo peso\n");
		printf("18.5 - 24.9 | Normal\n");
		printf("25.0 - 29.9 | Sobrepeso\n");
		printf(">=30   | Obesidad\n");
		
		return 0;
	
}
	

