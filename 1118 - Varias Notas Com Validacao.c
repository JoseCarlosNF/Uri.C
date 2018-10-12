// 1118 - Varias Notas Com Validacao


#include <stdio.h>

int main()
{
    int codigo;
    float nota1, nota2, media;

    codigo = 1;

    while (codigo == 1){
        // Reset das notas em caso de outras chamadas
        nota1 = 0; nota2 = 0;

        // Entrada das notas
        scanf("%f", &nota1);
        while ((nota1 < 0) || (nota1 > 10)){
            printf("nota invalida\n");
            scanf("%f", &nota1);
        }
            
        scanf("%f", &nota2);
        while ((nota2 < 0) || (nota2 > 10)){
            printf("nota invalida\n");
            scanf("%f", &nota2);
        }
            
        // Media
        media = (nota1 + nota2) / 2;
        printf("media = %.2f\n", media);

        // Leitura codigo
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &codigo);

        // Caso codigo errado
        while ((codigo != 1) && (codigo != 2)){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &codigo);
        }

        // Caso os codigos certos
        if (codigo == 1)
            continue;
        else if (codigo == 2)
            break;

    }

    getch();
    return 0;
}
