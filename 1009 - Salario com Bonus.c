//1009 - Salario com Bonus

#include <stdio.h>
int main()
{
	char Nome;
	double SalarioFixo, TotalDeVendasPorMes, Salario;

	scanf("%s %lf %lf", &Nome, &SalarioFixo, &TotalDeVendasPorMes);
	Salario = SalarioFixo + (TotalDeVendasPorMes * 0.15);

	printf("TOTAL = R$ %.2lf\n", Salario);

	getch();
	return 0;
}