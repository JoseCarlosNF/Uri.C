// 1045 - Tipos de Triangulos

/*
1. Ler 3 float's
2. Ordenar as entradas em ordem decrescente
3. Definir qual o tipo de triangulo os tres lados formam
*/

#include <stdio.h>

int main(){

    float 
        a,b,c,aux;

    // Entrada
    scanf("%f %f %f", &a, &b, &c);

    // Ordenamento
    if (a < b){
        aux = a;
        a = b;
        b = aux;
    }
        
    if (b < c){
        aux = b;
        b = c;
        c = aux;
    }
        
    if (c > b){
        aux = c;
        c = b;
        b = aux;
    }
        
    if (b > a){
        aux = b;
        b = a;
        a = aux;
    }
        
    // Saida
    if (a >= b+c)
        printf("NAO FORMA TRIANGULO\n");
    else if (a*a == b*b+c*c)
        printf("TRIANGULO RETANGULO\n");
    else if (a*a > b*b+c*c)
        printf("TRIANGULO OBTUSANGULO\n");
    else if (a*a < b*b+c*c)
        printf("TRIANGULO ACUTANGULO\n");
    if ((a == b) && (b==c))
        printf("TRIANGULO EQUILATERO\n");
    else if ((a==b) || (a==c) || (b==c))
        printf("TRIANGULO ISOSCELES\n");

    getch();
    return 0;
}
