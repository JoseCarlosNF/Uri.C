// 1046 - Tempo de Jogo

/*
1. Ler hora de inicio e termino do jogo, respectivamente
2. Calcular a duração do jogo
*/

#include <stdio.h>

int tempo (int x, int y){
    int t;
    if (y <= x) y += 24;
    t = y - x;
    return t;
}

int main (){
    int inicio, fim;

    scanf("%d %d", &inicio, &fim);
    printf("O JOGO DUROU %d HORA(S)\n", tempo(inicio,fim));

    getch();
	return 0;
}