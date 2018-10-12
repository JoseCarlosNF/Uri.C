// 1060 - Numeros Positivos

/*
1. Ler 6 valores (separadamente)
2. Difernciar quantos são positivos
*/

#include <stdio.h>

int main()
{
	int leitura = 0 ,contador = 0;
	float valor;
	// Entradas / Definição
	while (leitura < 6){
		scanf("%f", &valor);
		if (valor >= 0)
			contador += 1;
		leitura += 1;
	}
	// Saida
	printf("%d valores positivos\n", contador);

	getch();
	return 0;
}