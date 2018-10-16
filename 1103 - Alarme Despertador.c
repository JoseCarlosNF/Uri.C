// 1103 - Alarme Despertador

#include <stdio.h>

int main(){

	int x, y, H1, H2, M1, M2;

	while (1){

		scanf("%d %d %d %d", &H1, &M1, &H2, &M2);

		if ((H1 == H2) && (M1 == M2))
			break;

		else{
			x = H1 * 60 + M1;
			y = H2 * 60 + M2;

			if (y <= x)
				y += 24 * 60;

			printf("%d\n", abs(y-x));
		}
	}



	getch();
	return 0;
}