// 1042 - Sort Simples

/*
1. Ler 3 valores inteiros
2. Ordenar de forma crescente +
3. Imprimir os valores em orddem crescente + uma linha em branco
4. Imprimir os valores na sequencia em que foram lidos
*/

#include <stdio.h>

int main(){

    //Variaveis
    int a,b,c,aux,_1,_2,_3;

    // Entrada
    scanf("%d %d %d", &a, &b, &c);
    _1 = a; 
    _2 = b;
    _3 = c;

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

    printf("%d\n", c);
    printf("%d\n", b);
    printf("%d\n\n", a);
    printf("%d\n", _1);
    printf("%d\n", _2);
    printf("%d\n", _3);

    getch();
    return 0;

}


