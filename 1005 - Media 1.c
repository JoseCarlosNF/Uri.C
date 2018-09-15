//1005 - Media 1

#include <stdio.h>
int main()
{
	float a, b, MEDIA;

	scanf("%f %f",&a, &b);
	a = a * 3.5;
	b = b * 7.5;

	MEDIA = (a + b) / 11;

	printf("%s %.5f\n","MEDIA =",MEDIA);

	getch();
	return 0;
}