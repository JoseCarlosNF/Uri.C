// 1037 - Intervalo

/*
Verificar em qual intervalo o valor de entrada se encontra
*/
#include <stdio.h>

int main()
{
	float entrada;

	// Entrada
	scanf("%f", &entrada);

	if ((0 <= entrada) && (entrada <= 25))
	    printf("Intervalo [0,25]\n");
	else if ((25 < entrada) && (entrada <= 50))
	    printf("Intervalo (25,50]\n");
	else if ((50 < entrada) && (entrada <= 75))
	    printf("Intervalo (50,75]\n");
	else if ((75 < entrada) && (entrada <= 100))
	    printf("Intervalo (75,100]\n");
	else
	    printf("Fora de intervalo\n");

	getch();
	return 0;
}
