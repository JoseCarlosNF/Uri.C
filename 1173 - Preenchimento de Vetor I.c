// 1173 - Preenchimento de Vetor I

#include <stdio.h>
int main(){

	int vetor[10], valor, i;

	scanf("%d", &valor);
	vetor[0] = valor;

	for(i = 1; i < 10; i++){
		vetor[i] = vetor[i-1] * 2;
	}

	for(i = 0; i < 10; i++){
		printf("N[%d] = %d\n", i, vetor[i]);
	}
	
	getch();
	return 0;
}