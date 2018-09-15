// 1038 - Lanche

/*
1. ler codigo do produto
2. Ler quantidade do produto
3. Imprimir valor a ser pago
*/

#include <stdio.h>

int main(){

	int quantidade, codigo;
	float pagar;

	scanf("%d %d", &codigo, &quantidade);

	if (codigo == 1)
		pagar = quantidade * 4.00;
	else if (codigo == 2)
		pagar = quantidade * 4.50;
	else if (codigo == 3)
		pagar = quantidade * 5.00;
	else if (codigo == 4)
		pagar = quantidade * 2.00;
	else if (codigo == 5)
		pagar = quantidade * 1.50;
	else
		printf("Codigo Invalido\n");

	if (pagar != 0)
		printf("Total: R$ %.2f\n", pagar);

	getch();
	return 0;
}
