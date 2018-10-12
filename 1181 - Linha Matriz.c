// 1181 - Linha Matriz
// 55% Errror

#include <stdio.h>
#define ordem 12

int main()
{	
	int linha, l, c;
	char operacao[2];
	double matriz[ordem][ordem], soma = 0.0;

	scanf("%d", &linha);
	scanf("%s", &operacao);

	for(l=0; l<ordem; l++){
		for(c=0; c<ordem; c++){
			scanf("%lf", &matriz[l][c]);

			if (l == linha){
				soma += matriz[l][c];
			}
		}
	}

	
	if (operacao[0] == 'S')
		printf("%.1lf\n", soma);

	else if (operacao[0] == 'M')
		printf("%.1lf\n", soma/(ordem*1.0));

	getch();
	return 0;
}