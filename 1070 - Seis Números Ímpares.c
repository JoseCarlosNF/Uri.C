// 1070 - Seis Números Ímpares

/*
1. Ler 1 valor inteiro
2. Apresentar 6 valores ímpares consecutivos
*/

#include <stdio.h>

int main()
{
	int contador = 0, x;

	//Entrada
	scanf("%d", &x);

	//Logica
	while (contador < 12){
		if (x % 2 != 0)
			printf("%d\n", x);
		contador += 1;
		x += 1;
	}

	getch();
	return 0;
}