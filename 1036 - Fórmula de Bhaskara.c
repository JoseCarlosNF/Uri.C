// 1036 - Fórmula de Bhaskara

/*
1.Ler 3 pontos flutuantes

2.Se não for possivel calcular a raiz mostrar, "Impossivel calcular"
    Divisão por zero ou raiz negativa

3. Imprimir o resultado com 5 digitos de flutuação
*/
#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,x,r1,r2;

	// Entrada
	scanf("%f %f %f", &a, &b, &c);

	// Delta
	x = (b*b) - (4 * a * c);

	// a == 0 (divisão por zero impossivel)
	if ((a == 0) || (x < 0)){
	    printf("Impossivel calcular\n");
	}

	// Calculo das raizes
	else if ((a != 0) && (x >= 0)){
		x = sqrt(x);

	    r1 = (-b+x) / (2*a);
	    r2 = (-b-x) / (2*a);

	    printf("R1 = %.5f\n", r1);
	    printf("R2 = %.5f\n", r2);	
	}
    
    getch();
    return 0;
}


