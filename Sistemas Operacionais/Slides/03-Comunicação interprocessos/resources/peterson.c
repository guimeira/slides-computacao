int vez; //Vez de quem:
int interessado[2]; //Inicialmente zeros:

void entrar_regiao(int processo) {
  int outro = 1-processo;
  interessado[processo] = true;
  vez = processo;
  
  while(vez == processo && interessado[outro] == true);
}

void sair_regiao(int processo) {
  interessado[processo] = false;
}
