//1015 - Distancia entre dois Pontos

#include <stdio.h>
#include <math.h>

int main()
{
	float Vetor1[4], Distancia;
	scanf("%f %f %f %f", &Vetor1[0], &Vetor1[1], &Vetor1[2], &Vetor1[3]);

	Distancia = sqrt(pow((Vetor1[2] - Vetor1[0]),2) + pow((Vetor1[3] - Vetor1[1]),2));

	printf("%.4f\n", Distancia);


	getch();
	return 0;
}