//1002 - Area do Circulo

#include <stdio.h>
#include <math.h>

#define n 3.14159
int main()
{
	double area, raio;	
	scanf("%lf", &raio);

	area = n * pow(raio,2);

	printf("A=%.4lf\n", area);

	getch();
	return 0;
}