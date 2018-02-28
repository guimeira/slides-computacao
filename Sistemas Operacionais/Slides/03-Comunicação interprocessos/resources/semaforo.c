semaforo mutex = 1;
semaforo vazio = MAX;
semaforo cheio = 0;
void produtor() {
  int item;
  while(1) {
    item = produz_item();
    down(&vazio);
    down(&mutex);
    insere_item(item);
    up(&mutex);
    up(&cheio);
  }
}

void consumidor() {
  int item;
  while(1) {
    down(&cheio);
    down(&mutex);
    item = remove_item();
    up(&mutex);
    up(&vazio);
    consumir_item();
  }
}