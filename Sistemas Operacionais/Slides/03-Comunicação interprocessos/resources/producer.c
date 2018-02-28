int numBuffer = 0;

void produtor() {
  int item;
  
  while(1) {
    item = produz_item();
    if(numBuffer == MAX) sleep();
    insere_item(item);
    numBuffer = numBuffer+1;
    if(numBuffer == 1)
      wakeup(consumidor);
  }
}