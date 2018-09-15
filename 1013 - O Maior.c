//1013 - O Maior

#include <stdio.h>
int main()
{
	int a, b, c, Maior;

	scanf("%d %d %d", &a, &b, &c );
	Maior = (a + b + abs(a-b)) / 2;

	if (c > Maior)
	{
		printf("%d eh o maior\n",c);
	}
	else
	{
		printf("%d eh o maior\n",Maior);
	}

	getch();
	return 0;
}