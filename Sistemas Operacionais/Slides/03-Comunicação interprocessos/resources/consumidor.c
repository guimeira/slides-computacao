void consumidor() {
  int item;
  
  while(1) {
    if(numBuffer == 0) sleep();
    item = remover_item();
    numBuffer = numBuffer-1;
    if(numBuffer == MAX-1)
      wakeup(consumer);
    consumir_item();
  }
}