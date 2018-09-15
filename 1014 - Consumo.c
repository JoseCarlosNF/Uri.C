//1014 - Consumo

#include <stdio.h>

int main()
{
	int x; //distancia 
	float y, Consumo;  //litros

	scanf("%d %f", &x, &y);

	Consumo = x / y;

	printf("%.3f km/l\n", Consumo);

	getch();
	return 0;
}