#include <stdio.h>

int main() {
  double valor;
  printf("Digite o valor do carro: ");
  scanf("%lf", &valor);
  
  double entrada = valor*0.4;
  double restante = valor-entrada;
  double parcela = restante/10;
  
  printf("Valor da entrada: R$ %.2f\n", entrada);
  printf("Valor das parcelas: R$ %.2f\n", parcela);
  return 0;
}