#include <stdio.h>

int main() {
  int numero;
  printf("Digite o número do mês: ");
  scanf("%d",&numero);
  
  switch(numero) {
    case 1:
      printf("Janeiro\n");
      break;

    case 2:
      printf("Fevereiro\n");
      break;
    
    //Continua...
    
    default:
      printf("Não existe esse mês.\n");
      break;
  }
  
  return 0;
}