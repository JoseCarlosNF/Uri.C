// 1043 - Triangulo

/*
1. Ler 3 float's
2. Verificar se os valores formam um triangulo
    2.1 Se não calcular a area do trapezio de bases A e B, de altura C
    2.2 Imprimir 'Area = xx.x'
3. Calcular o perimetro do triangulo
4. Imprimir 'Perimetro = xx.x'
*/

#include <stdio.h>

int main(){

	float 
		a,b,c,
		perimetroTriangulo,
		areaTrapezio;

	// Entrada
	scanf("%f %f %f", &a, &b, &c);

	// Verificação do triangulo
	if ((a<(b+c)) && (b<(a+c)) && (c<(a+b))){
		perimetroTriangulo = a + b + c;
    	printf("Perimetro = %.1f\n", perimetroTriangulo);
	}
    	
	else{
		areaTrapezio = c * (a + b) / 2;
    	printf("Area = %.1f\n", areaTrapezio);
	}
    	
	getch();
	return 0;
}