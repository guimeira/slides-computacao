#include <stdio.h>

int main() {
  double nota;
  printf("Informe a nota: ");
  scanf("%lf", &nota);
  
  if(nota >= 7) {
    printf("Passou direto!\n");
  } else {
    double notaFinal;
    printf("Informe a nota da prova final: ");
    scanf("%lf", &notaFinal);
    double media = (nota+notaFinal)/2;
    
    if(media >= 5) {
      printf("Passou com média %.1f\n", media);
    } else {
      printf("Reprovou com média %.1f\n", media);
    }
  }
  
  return 0;
}