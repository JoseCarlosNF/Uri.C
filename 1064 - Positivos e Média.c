// 1064 - Positivos e Média

/*
1. Ler 6 valores (separadamente)
2. Difernciar quantos são positivos
3. Calcular a media entre os numeros positivos com uma casa decimal
*/

#include <stdio.h>

int main()
{
	float valor, soma = 0;
	int contador = 0, leitura = 0;

// Entradas / Definição
	while (leitura < 6){
		scanf("%f", &valor);
		if (valor >= 0){
			contador += 1;
			soma += valor;
		}
		leitura += 1;
	}

	//Saida
	printf("%d valores positivos\n", contador );
	printf("%.1f\n", (soma/contador));

	getch();
	return 0;
}