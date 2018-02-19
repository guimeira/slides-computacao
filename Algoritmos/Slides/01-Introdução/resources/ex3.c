#include <stdio.h>
#include <math.h>

int main() {
  int numero;
  printf("Digite um número: ");
  scanf("%d", &numero);
  int quadrado = pow(numero, 2);
  printf("O quadrado de %d é %d\n", numero, quadrado);
  return 0;
}