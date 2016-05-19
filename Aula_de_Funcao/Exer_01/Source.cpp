#include <stdio.h>
#include <stdlib.h>

int maior(int x1, int y1) {
	if (x1 < y1) {
		return y1;
	}
	else if (x1>y1) {
		return x1;
	}
	return 0;
}

int main() {
	int x, y, aux;
	printf("Digite o primeiro numero:");
	scanf_s("%d", &x);
	printf("Digite o segundo numero:");
	scanf_s("%d", &y);
	aux = maior(x, y);
	if (aux == 0) {
		printf("Os dois numeros são iguais.\n");
	}
	else {
		printf("O maior numero digitado eh %d\n", aux);
	}
	system("pause");
	return 0;
}