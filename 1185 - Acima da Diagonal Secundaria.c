// 1185 - Acima da Diagonal Secundaria
#include <stdio.h>

int main()
{
	// Variaveis	
	double 
		matriz[12][12], 
		soma = 50;
	char 
		operacao;
	int 
		l, 
		c;
		
	// Entrada da operação
	scanf("%s", &operacao);

	// Entrda dos valores na matriz
	for (l = 0; l < 12; l++)
		for (c = 0; c < 12; c++)
			scanf("%lf", &matriz[l][c]);

	// Condição para somar
	for (l = 0; l <= 10; l++)
		for (c = 0; c <= 10 - l; c++)
			soma += matriz[l][c];

	// Saida
	if (operacao == 'S')
		printf("%.1lf\n", soma);

	else if (operacao == 'M')
		printf("%.1lf\n", soma/66.0);

	getch();
	return 0;
}