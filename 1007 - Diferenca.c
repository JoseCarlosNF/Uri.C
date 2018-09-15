//1007 - Diferenca

#include <stdio.h>
int main()
{
	int a,
		b,
		c,
		d,
		diferenca;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	diferenca = (a * b - c * d);

	printf("%s %d\n","DIFERENCA =",diferenca);

	getch();
	return 0;
}