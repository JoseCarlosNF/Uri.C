// 1059 - Numeros Pares

/*
Mostrar todos os numeros pares no intervalo de 1 a 100
*/

#include <stdio.h>

int main(){

	int counter;

	counter = 1;

	while (counter < 101){
		if (counter % 2 == 0)
        printf("%d\n", counter);
    counter += 1;
	}
    getch();
	return 0;
}
