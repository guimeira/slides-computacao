void consumidor() {
  int item, i;
  mensagem m;
  
  for(i = 0; i < N; i++)
    send(produtor, &m);
  
  while(true) {
    receive(produtor, &m);
    item = extrai_item(&m);
    send(produtor, &m);
    consumir_item(item);	
  }
}

void produtor() {
  int item;
  mensagem m;
  
  while(true) {
    item = produzir_item();
    receive(consumidor, &m);
    constroi_mensagem(&m, item);
    send(consumidor, &m);
  }
}