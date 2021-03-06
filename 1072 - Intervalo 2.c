// 1072 - Intervalo 2

/*
1. Ler 1 valor inteiro (quantidade de valores que serão lidos)
2. Mostrar desses valores quais estão dentro do intervalo 10,20 e quantos fora
*/

#include <stdio.h>

int main()
{
	int N, valor, dentro=0, fora=0;

	// Entrada
	scanf("%d", &N);

	while (N > 0){
		scanf("%d", &valor);

		if ((10 <= valor) && (valor <= 20))
			dentro += 1;
		else
			fora += 1;
		N -= 1;
	}

	// Saida
	printf("%d in\n", dentro);
	printf("%d out\n", fora);

	getch();
	return 0;
}