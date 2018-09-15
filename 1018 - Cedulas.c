//1018 - Cedulas

#include <stdio.h>

int main()
{
	int N, _1, _2, _5, _10, _20, _50, _100;

	scanf("%d", &N);

	_100 = N / 100;
	_50 = (N % 100) / 50;
	_20 = ((N % 100) % 50) / 20;
	_10 = (((N % 100) % 50) % 20) / 10;
	_5 = ((((N % 100) % 50) % 20) % 10) / 5;
	_2 = (((((N % 100) % 50) % 20) % 10) % 5) / 2;
	_1 = ((((((N % 100) % 50) % 20) % 10) % 5) % 2) / 1;

	printf("%d\n",N);
	printf("%d nota(s) de R$ 100,00\n",_100);
	printf("%d nota(s) de R$ 50,00\n",_50);
	printf("%d nota(s) de R$ 20,00\n",_20);
	printf("%d nota(s) de R$ 10,00\n",_10);
	printf("%d nota(s) de R$ 5,00\n",_5);
	printf("%d nota(s) de R$ 2,00\n",_2);
	printf("%d nota(s) de R$ 1,00\n",_1);

	getch();
	return 0;
}