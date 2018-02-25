#include <stdio.h>

int main() {
  char letra;
  printf("Informe uma letra: ");
  scanf("%c", &letra);
  if(letra == 'a') {
    printf("A de amor\n");
  } else if(letra == 'b') {
    printf("B de baixinho\n");
  } else if(letra == 'c') {
    printf("C de coração\n");
  } //continua...
  
  return 0;
}