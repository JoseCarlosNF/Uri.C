//1010 - Calculo Simples 

#include <stdio.h>

int main()
{
	float Peca1[3], Peca2[3], Total;

	scanf("%f %f %f", &Peca1[0], &Peca1[1], &Peca1[2]);  // Codigo | Quantidade | Preco
	scanf("%f %f %f", &Peca2[0], &Peca2[1], &Peca2[2]);  // Codigo | Quantidade | Preco

	Total = (Peca1[1] * Peca1[2]) + (Peca2[1] * Peca2[2]);

	printf("VALOR A PAGAR: R$ %.2f\n", Total);

	getch();
	return 0;
}