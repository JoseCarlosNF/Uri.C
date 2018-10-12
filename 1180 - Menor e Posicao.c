// 1180 - Menor e Posicao

#include <stdio.h>
int main(){

	int tamVetor;
	scanf("%d", &tamVetor);

	int vetor[tamVetor], valor, menor, posicao, i;

	for(i=0; i<tamVetor; i++){

		scanf("%d", &valor);

		if(i == 0)
			menor = vetor[i];

		vetor[i] = valor;

		if (vetor[i] < menor){
			menor = vetor[i];
			posicao = i;
		}
	}

	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", posicao);
	
	getch();
	return 0;
}