#include <stdio.h>

int main() {
  int idade;
  printf("Informe sua idade: ");
  scanf("%d",&idade);
  
  if(idade >= 60) {
    printf("Já chegou na terceira idade!\n");
  }
  
  return 0;
}