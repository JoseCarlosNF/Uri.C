// 1181 - Linha Matriz

#include <stdio.h>
// A ordem deve ser um numero abaixo do desejado, para que o *for* possa ser
// executado de maneira correta.
#define ordem 12

int main(){
  int linha, l, c;
  char operacao[2];
  double matriz[ordem][ordem], soma = 0.0;

  scanf("%d", &linha);
  scanf("%s", &operacao);

  for(l=0; l<=(ordem-1); l++){
    for(c=0; c<=(ordem-1); c++){
      scanf("%lf", &matriz[l][c]);

      if(l == linha){
          soma += matriz[l][c];
      }
    }
  }


  if(operacao[0] == 'S')
    printf("%.1lf\n", soma);

  else if(operacao[0] == 'M')
    printf("%.1lf\n", soma/(ordem*1.0));

  return 0;
}
