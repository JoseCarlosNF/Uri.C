// 1040 - Media 3

/*
1. ler 4 notas de alunos
2. implementar peso 2, 3, 4, 1 respectivamente
3. Calcular a media entre as notas
4. Mostrar a mensagem 'Media: '
5. Se a media >= 7.0 imprimir 'Aluno aprovado'
6. Se a media < 5.0 imprimir 'Aluno reprovado'
7. Se a 5.0 <= media <= 6.9 imprimir 'Aluno em exame'
    7.1 Se em exame ler nota obtida pelo aluno no exame
    7.2 'Nota do exame: '
    7.3 Somar a nota do exame com a media anterior e dividir por 2
    7.4 Se media >= 5.0 'Aluno aprovado'
    7.5 Se media <= 4.9 'Aluno aprovado'
    7.6 Apresentar 'Media final: '
obs: todas as apresentações de nota devem ter uma casa decimal
*/

#include <stdio.h>

float 
nota1, nota2, nota3, nota4, 
media, notaExame, mediaFinal;

int main(){
    // Entrada
    scanf ("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    // Peso das notas
    nota1 *= 2;
    nota2 *= 3;
    nota3 *= 4;
    nota4 *= 1;

    // Media Comum
    media = (nota1 + nota2 + nota3 + nota4) / 10;
    printf("Media: %.1f\n", media);

    // Avaliação de Media
    if (media >= 7.0)
        printf("Aluno aprovado.\n");

    else if (media < 5.0)
        printf("Aluno reprovado.\n");

    else if ((media >= 5.0) && (media <= 6.9)){
        printf("Aluno em exame.\n");

        // Exame
        scanf("%f", &notaExame);
        printf("Nota do exame: %.1f\n", notaExame);
        mediaFinal = (notaExame + media) / 2;

        //Conclusão exame
        if (mediaFinal >= 5.0)
            printf("Aluno aprovado.\n");
        else if (mediaFinal <= 4.9)
            printf("Aluno reprovado.\n");

        // Apresentar Media final
        printf("Media final: %.1f\n", mediaFinal);
    }
        
    getch();
    return 0;
}