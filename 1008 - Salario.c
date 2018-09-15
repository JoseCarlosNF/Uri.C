//1008 - Salario

#include <stdio.h>
int main()
{
	int Number, HorasTrabalhadas;
	float SalarioPorHora, Salario;

	scanf("%d %d %f",&Number, &HorasTrabalhadas, &SalarioPorHora);

	Salario = SalarioPorHora * HorasTrabalhadas;

	printf("NUMBER = %d\n",Number);
	printf("SALARY = U$ %.2f\n", Salario);

	getch();
	return 0;
}