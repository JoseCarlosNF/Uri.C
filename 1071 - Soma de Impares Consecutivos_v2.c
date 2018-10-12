// 1071 - Soma de Impares Consecutivos

#include <stdio.h>

int main()
{
	int x,y, soma;

	scanf("%d %d", &x,&y);


	if (x > y){
		x -= 1;
		while(x > y){
			if (x % 2 != 0)
				soma += x;
			x -= 1;
		}
	}

	if (y > x){
		y -= 1;
		while (y > x){
			if (y % 2 != 0)
				soma += y;
			y -= 1;
		}
	}

	// Saida
	printf("%d\n", soma);

	getch();
	return 0;
}
	/*

	if (x < y){
		do
		{
			if (x % 2 != 0)
				soma += x;			
			x += 1;
		} while (x != y);
	}
	if (y < x){
		do
		{
			if (y % 2 != 0)
				soma += y;			
			y += 1;
		} while (y != x);
	}

	printf("%d\n",soma);

	getch();
	return 0;
}

*/