#include <stdio.h>
#include <stdlib.h>

float FtoC(float f1) {
	return (f1 - 32.0f) * (5.0f / 9.0f);
}

int main() {
	float fah;
	printf("Digite a temperatura em Fahrenheit:");
	scanf_s("%f", &fah);
	printf("A temperatura %.2f em Celcius eh %.2f\n", fah, FtoC(fah));
	system("pause");
	return 0;
}