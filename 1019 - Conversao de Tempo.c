//1019 - Conversao de Tempo

#include <stdio.h>
int main()
{
	int Horas,
		Minutos,
		Segundos,
		SegundosTotal;

	scanf("%d", &SegundosTotal);

	Horas = SegundosTotal / 3600;
	Minutos = (SegundosTotal % 3600) / 60;
	Segundos = (SegundosTotal % 3600) % 60;

	printf("%d:%d:%d\n",Horas, Minutos, Segundos);

	getch();
	return 0;
}