#include <stdio.h>

int main() {
  int a = 10;
  int maior = a > 20;
  int menor = a < 20;
  int igual = a == 20;
  printf("a é maior que 20: %d\n", maior);
  printf("a é menor que 20: %d\n", menor);
  printf("a é igual a 20: %d\n", igual);
  return 0;
}