// 1080 - Maior e Posição

#include <stdio.h>
#define numeroDeleituras 100

int main(){
	int
		leituraAtual,
		valorAtual,
		maiorValor,
		posicao,
		posicaoTotal;

	for(leituraAtual=0; leituraAtual<numeroDeleituras; leituraAtual++){
		scanf("%d", &valorAtual);
		posicaoTotal += 1;
		if (valorAtual >= maiorValor){
			maiorValor = valorAtual;
			posicao = posicaoTotal;
		}
	}

	printf("%d\n", maiorValor);
	printf("%d\n", posicao);

	getch();
	return 0;
}