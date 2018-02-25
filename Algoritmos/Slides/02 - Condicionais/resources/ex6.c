#include <stdio.h>

int main() {
  int idade;
  printf("Digite uma idade: ");
  scanf("%d",&idade);
  
  if(idade >= 70 || (idade >= 16 && idade < 18)) {
    printf("O voto é opcional\n");
  } else if(idade < 16) {
    printf("Não pode votar\n");
  } else {
    printf("O voto é obrigatório.\n");
  }
  
  return 0;
}