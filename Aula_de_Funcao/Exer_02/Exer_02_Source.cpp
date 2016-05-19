#include <stdio.h>
#include <stdlib.h>

void mesEst(int x) {
	int dias;
	switch (x)
	{
		case 1:
			printf("Mes: Janeiro\nDias: 31\n");
			break;
		case 2:
			printf("Mes: Fevereiro\nDias: 28 ou 29\n");
			break;
		case 3:
			printf("Mes: Março\nDias: 31\n");
			break;
		case 4:
			printf("Mes: Abril\nDias: 30\n");
			break;
		case 5:
			printf("Mes: Maio\nDias: 31\n");
			break;
		case 6:
			printf("Mes: Junho\nDias: 30\n");
			break;
		case 7:
			printf("Mes: Julho\nDias: 31\n");
			break;
		case 8:
			printf("Mes: Agosto\nDias: 31\n");
			break;
		case 9:
			printf("Mes: Setembro\nDias: 30\n");
			break;
		case 10:
			printf("Mes: Outubro\nDias: 31\n");
			break;
		case 11:
			printf("Mes: Novembro\nDias: 30\n");
			break;
		case 12:
			printf("Mes: Dezembro\nDias: 31\n");
			break;
	}
}

int main() {

	int mes;

	printf("Digite o numero do mes:");
	scanf_s("%d", &mes);

	while ((mes < 1) || (mes> 12)) {
		printf("Digite o numero valido de mes:");
		scanf_s("%d", &mes);
	}

	printf("\n");
	mesEst(mes);
	system("pause");
	return 0;
}