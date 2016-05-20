#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * fatorial(n - 1);
}

int main() {
	int x, r;
	printf("Informe um numero:");
	scanf_s("%d", &x);
	r = fatorial(x);
	printf("Fatorial de %d = %d\n", x, r);
	system("pause");
	return 0;
}