// 1078 - Tabuada

/*
1. Ler 1 inteiro (N)
2. Mostra a tabuada de N
*/

#include <stdio.h>

int main()
{
	int N, multi=1, resul;

	// Entrada
	scanf("%d", &N);

	// Tabuada / Saida
	while (multi < 11){
		resul = multi * N;
		printf("%d x %d = %d\n", multi, N, resul);
		multi += 1;
	}
	
	getch();
	return 0;
}