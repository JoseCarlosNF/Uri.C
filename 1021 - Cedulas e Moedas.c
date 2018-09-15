// 1021 - Cedulas e Moedas

/*
Ler um valor e distribui-lo em cedulas e moedas
da forma mais eficiente possivel
*/


#include <stdio.h>

int main(){

	float N;
	int nota;

	printf("Digite o valor:\n");
	scanf("%f", &N);

	if ((N >= 0) && (N <= 1000000.00)){
		printf("NOTAS:\n");
		nota = N / 100;
		printf("%d nota(s) de R$ 100.00\n", nota);
		N = N % 100;

		nota = N / 50;
		printf("%d nota(s) de R$ 50.00\n\n", nota);

		printf("MOEDAS:\n");


	}
	getch();
	return 0;
}