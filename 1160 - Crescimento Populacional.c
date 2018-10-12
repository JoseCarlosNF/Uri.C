// 1160 - Crescimento Populacional

#include <stdio.h>
int main(){

	int T, PA, PB, anos, i;
	double G1, G2;

	// Entradas
	scanf("%d", &T);

	for(i=1; i<=T; i++){
		
		// Reset dos anos
		anos = 0;

		// Leitura dos valores
		scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

	    // Logica
	    while (PA <= PB){
	    	PA += (PA * (G1 / 100.0)) / 1;
	        PB += (PB * (G2 / 100.0)) / 1;

	        // Incremento dos anos
	        anos++;

	        // Caso + de 100 anos (parar)
	        if (anos > 100){
	        	printf("Mais de 1 seculo.\n");
	        	break;
	        }
	    }

	    // Caso < de 100 anos
	    if (anos <= 100)
	        printf("%d anos.\n", anos);
	}
	getch();
	return 0;
}


