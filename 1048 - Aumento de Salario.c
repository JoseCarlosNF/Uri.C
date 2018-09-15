// 1048 - Aumento de Salario

/*
1. Ler o salario atual do funcionario
2. Com base na tabela de aumentos calcular o novo salario
3. Calcular o valor do reajuste e o percentual
*/

/*
Text's:
Novo Salario: xxx.xx
Reajuste ganho: xx.xx
Em percentual: xx%
*/

#include <stdio.h>

int main(){

    float salario;

    // Entrada
    scanf("%f", &salario);

    // Categoria de reajuste / Saida
    if (salario <= 400){
        printf("Novo salario: %.2f\n", (salario * 1.15));
        printf("Reajuste ganho: %.2f\n", (salario*0.15));
        printf("Em percentual: 15 %%\n");
    }

    if ((400 < salario) && (salario <= 800)){
        printf("Novo salario: %.2f\n", (salario * 1.12));
        printf("Reajuste ganho: %.2f\n", (salario*0.12));
        printf("Em percentual: 12 %%\n");
    }

    if ((800 < salario) && (salario <= 1200)){
        printf("Novo salario: %.2f\n", (salario * 1.10));
        printf("Reajuste ganho: %.2f\n", (salario*0.10));
        printf("Em percentual: 10 %%\n");
    }

    if ((1200 < salario) && (salario <= 2000)){
        printf("Novo salario: %.2f\n", (salario * 1.07));
        printf("Reajuste ganho: %.2f\n", (salario*0.07));
        printf("Em percentual: 7 %%\n");
    }

    if (salario > 2000){
        printf("Novo salario: %.2f\n", (salario * 1.04));
        printf("Reajuste ganho: %.2f\n", (salario*0.04));
        printf("Em percentual: 4 %%\n");
    }

    getch();
    return 0;
}
