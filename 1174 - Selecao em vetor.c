// 1174 - Selecao em vetor

#include <stdio.h>
#define tamVetor 100
int main()
{
	int i;
	float vetor[tamVetor], valor;

	for (i = 0; i < tamVetor; i++){
		scanf("%f", &valor);
		vetor[i] = valor;
	}

	for (i = 0; i < tamVetor; i++)
	{
		if (vetor[i] <= 10){
			printf("A[%d] = %.1f\n", i, vetor[i]);
		}
	}

	getch();
	return 0;
}