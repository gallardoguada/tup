#include <stdio.h>

int main() {
	int num1, num2, num3, temp;
	printf("Ingrese el primer valor a analizar:  ");
	scanf("%d", &num1);
	printf("\n");
	printf("Ingrese el segundo valor a analizar:  ");
	scanf("%d", &num2);
	printf("\n");
	printf("Ingrese el tercer valor a analizar:  ");
	scanf("%d", &num3);
	printf("\n");
	if (num1 > num2) {
		num1 = num1 + num2;
		num2 = num1 - num2;
		num1 = num1 - num2;
	}
	if (num2 > num3) {
		num2 = num2 + num3;
		num3 = num2 - num3;
		num2 = num2 - num3;
	}
	if (num1 > num2) {
		num1 = num1 + num2;
		num2 = num1 - num2;
		num1 = num1 - num2;

	}
	printf(" números ordenados: %d %d %d\n", num1, num2, num3);
	
	return 0;
}
