//1006 - Media 2

#include <stdio.h>
int main()
{
	float a, b, c, media;

	scanf("%f %f %f", &a, &b, &c);
	a = a * 2;
	b = b * 3;
	c = c * 5;

	media = (a + b + c) / 10;

	printf("%s %.1f\n","MEDIA =", media);


	getch();
	return 0;
}