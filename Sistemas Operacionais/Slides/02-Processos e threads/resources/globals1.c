int saque(int valor) {
  if(saldo >= valor) {
    saldo = saldo-valor;
    return AUTORIZADO;
  } else {
    return RECUSADO;
  }
}