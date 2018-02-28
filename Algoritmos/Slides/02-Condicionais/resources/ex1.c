#include <stdio.h>

int main() {
  double nota;
  printf("Informe a nota: ");
  scanf("%lf", &nota);
  
  if(nota >= 7) {
    printf("Passou direto!\n");
  } else {
    printf("Faz prova final\n");
  }
  
  return 0;
}