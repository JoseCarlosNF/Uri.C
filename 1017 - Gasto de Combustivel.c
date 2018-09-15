//1017 - Gasto de Combustivel

#include <stdio.h>

int main()
{
	int Distancia,
		TempoHoras,
		VelocidadeMedia;

	float CombustivelNecessario;

	scanf("%d %d", &TempoHoras, &VelocidadeMedia);

	Distancia = VelocidadeMedia * TempoHoras;

	CombustivelNecessario = Distancia / 12.0;

	printf("%.3f\n",CombustivelNecessario );

	getch();
	return 0;
}