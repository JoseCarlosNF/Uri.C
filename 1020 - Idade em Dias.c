//1020 - Idade em Dias

#include <stdio.h>

int main()
{
	int Anos, Meses, Dias, DiasTotal;

	scanf("%d", &DiasTotal);

	Anos = DiasTotal / 365;
	Meses = (DiasTotal % 365) / 30;
	Dias = (DiasTotal % 365) % 30;

	printf("%d ano(s)\n",Anos);
	printf("%d mes(es)\n",Meses);
	printf("%d dia(s)\n",Dias);

	getch();
	return 0;
}