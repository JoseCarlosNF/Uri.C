// 1187 - Area Superior

#include <stdio.h>
main()
{
	// Variaveis	
	double 
		matriz[12][12], 
		soma = 0.0;
	char 
		operacao[2];
	int 
		l, 
		c;
    // Entrada da operação
	scanf("%s", &operacao);

	// Entrda dos valores na matriz
	for (l = 0; l < 12; l++)
		for (c = 0; c < 12; c++)
			scanf("%lf", &matriz[l][c]);

    // Condição da Area Superior
    for(l=0; l<=4; l++)
        for(c=l+1; c<=10-l; c++)
        soma += matriz[l][c];

	// Saida
	if (operacao[0] == 'S')
		printf("%.1lf\n", soma);

	else if (operacao[0] == 'M')
		printf("%.1lf\n", soma/30.0);

    getch();
    return 0;
}
