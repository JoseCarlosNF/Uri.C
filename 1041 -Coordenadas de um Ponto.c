// 1041 -Coordenadas de um Ponto

/*
1. Ler 2 valores decimais (x,y).
2. Determinar em qual quadrante do sistema cartesiano se encontra
    2.1 Ou se está sobe um eixo
        2.1.1 Se sobe um dos eixos imprimir 'Eixo X' ou 'Eixo Y'
    2.2 Ou na origem (x= y= 0)
        2.2.1 Se na origem imprimir 'Origem'
*/

#include <stdio.h>

int main(){
    float x, y;

    // Entrada
    scanf("%f %f", &x, &y);

    // Origem
    if ((x == 0) && (y == 0))
        printf("Origem\n");

    // Sobe um eixo
    else if (x == 0)
        printf("Eixo Y\n");
    else if (y == 0)
        printf("Eixo X\n");

    // Determinação de Quadrante
    else if ((x > 0) && (y > 0))
        printf("Q1\n");
    else if ((x < 0) && (y > 0))
        printf("Q2\n");
    else if ((x < 0) && (y < 0))
        printf("Q3\n");
    else if ((x > 0) && (y < 0))
        printf("Q4\n");

    getch();
    return 0;
}
