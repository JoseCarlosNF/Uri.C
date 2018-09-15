//1004 - Produto Simples

#include <stdio.h>
int main()
{
	int a,
		b,
		PROD;

	scanf("%d %d", &a, &b);
	PROD = a * b;
	
	printf("%s %d\n","PROD =", PROD);

	getch();
	return 0;
}