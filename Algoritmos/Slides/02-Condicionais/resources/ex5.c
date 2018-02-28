#include <stdio.h>

int main() {
  int temp;
  printf("Digite a temperatura: ");
  scanf("%d",&temp);
  
  if(temp >= 0) {
    if(temp <= 100) {
      printf("Água está líquida.\n");
    } else {
      printf("Água não está líquida.\n");
    }
  } else {
    printf("Água não está líquida.\n");
  }
  
  return 0;
}