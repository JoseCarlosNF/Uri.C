// 1435 - Matriz Quadrada I

#include<stdio.h>
int main()
{
    int l, c, ordem, aux;

    ordem=1;
    while(ordem!=0){

    	// Leitura da ordem da matriz
        scanf("%d",&ordem);

        // Caso a ordem da matriz seja 0
        if(ordem==0)
        	break;

        // Percorre/Imprimir a Matriz
        for(l=1;l<=ordem;l++){
            for(c=1;c<=ordem;c++){

                aux = l;				// Variaveel auxiliar recebe o valor da linha em analise

                if(c < aux)				// Se o indice da coluna for menor que o valor da variavel auxiliar/linha.
                	aux = c;			// A variavel auxiliar recebe o valor da coluna.

                if(ordem-l+1 < aux)		// Se a ordem menos o indice da linha mais um for menor que o valor da variavel auxiliar/linha.
                	aux = ordem-l+1;	// A variavel auxiliar recebe o valor da ordem menos o indice da linha mais 1.

                if(ordem-c+1 < aux)		// Se a ordem menos o indice da coluna mais um for menor que o valor da variavel auxiliar/linha.
                	aux = ordem-c+1;	// A variavel auxiliar recebe o valor da ordem menos o indice da coluna mais 1.

                printf("%3d",aux);		// Imprimir o resultado que prevalecer, sobre as comparações anteriores. Com 3 digitos de justificação.

                if(c < ordem)			// Se indice da coluna for menor que o valor da ordem.
                	printf(" ");		// Dar espaço para próximo item da linha.
                else 
                	printf("\n");		// Finalização de analise da linha. Pular para próxima linha.
            }
        }
        printf("\n");					// Termino da analise da matriz. Pronto para fazer a proxima leitura de ordem.
    }

    getch();
    return 0;
}