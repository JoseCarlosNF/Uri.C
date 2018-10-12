// 1183 - Acima da Diagonal Principal

#include <stdio.h>
#define ordem 12
int main()
{	
	int l, c;
	float valor, soma;
	char operacao;
	soma = 0;

	scanf("%s", &operacao);
	
	for(l=0; l<ordem; l++){
		for(c=0; c<ordem; c++){

			scanf("%f", &valor);			
			if (c>l){
				soma += valor;
			}			
		}
	}
	
	if (operacao == 'S')
		printf("%.1f\n", soma);

	else if (operacao == 'M')
		printf("%.1f\n", soma/66.0);

	getch();
	return 0;
}