// 1179 - Preenchimento de Vetor IV

#include <stdio.h>

int main()
{
	int vetorPar[5], vetorImpar[5],
		countPar = 0, countImpar = 0,
		valor, i, n;

	for(i=0; i<15; i++){

		scanf("%d", &valor);

		if (valor % 2 == 0){
			vetorPar[countPar] = valor;
			countPar++;

			if (countPar == 5){				
				countPar = 0;

				for(n=0; n<5; n++){
					printf("par[%d] = %d\n",n, vetorPar[n]);
					vetorPar[n] = 0;
				}
				
			}

		}

		else if (valor % 2 != 0){
			vetorImpar[countImpar] = valor;
			countImpar++;

			if (countImpar == 5){
				countImpar = 0;

				for(n=0; n<5; n++){
					printf("impar[%d] = %d\n",n, vetorImpar[n]);
					vetorImpar[n] = 0;
				}
				
			}

		}

	}

	for(n=0; n<5; n++){
		if (vetorImpar[n] != 0){
			printf("impar[%d] = %d\n",n, vetorImpar[n]);
		}
	}

	for(n=0; n<5; n++){
		if (vetorPar[n] != 0){
			printf("par[%d] = %d\n",n, vetorPar[n]);
		}
	}


	getch();
	return 0;
}