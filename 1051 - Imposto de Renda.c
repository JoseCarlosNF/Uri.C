#include <stdio.h>

int main(){
    float salario, imposto;
    
    scanf("%f", &salario);

    if (salario <= 2000){
        printf("Isento\n");
    }
    else if (salario <= 3000){
        imposto = (salario - 2000)*0.08;
        printf("R$ %.2f\n", imposto);
    }
    else if (salario<= 4500){
        imposto = (salario-3000)*0.18 + (1000*0.08);
        printf("R$ %.2f\n", imposto);
    }
    else{
        imposto = (salario-4500)*0.28 + (1500*0.18) + (1000*0.08);
        printf("R$ %.2f\n", imposto);
    }
    
    return 0;
}
