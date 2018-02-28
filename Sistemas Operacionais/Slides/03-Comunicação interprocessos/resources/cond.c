#include <stdio.h>
#include <pthread.h>
#define MAX 1000000000
pthread_mutex_t mutex;
pthread_cond_t condC, condP;
int buffer = 0;

void* producer(void *ptr) {
  int i;
  for(i = 1; i <= MAX; i++) {
  	pthread_mutex_lock(&mmutex);
  	while(buffer != 0) pthread_cond_wait(&condP, &mutex);
  	buffer = i;
  	pthread_cond_signal(&condC);
  	pthread_mutex_unlock(&mutex);
  }
  pthread_exit(0);
}

void* consumer(void *ptr) {
  int i;
  for(i = 1; i <= MAX; i++) {
    pthread_mutex_lock(&mutex);
    while(buffer == 0) pthread_cond_wait(condC, &mutex);
    buffer = 0;
    pthread_cond_signal(&condP);
    pthread_mutex_unlock(&mutex);
  }
  pthread_exit(0);
}

int main(int argc, char *argv[]) {
  pthread_t prod, cons;
  pthread_mutex_init(&mutex, 0);
  pthread_cond_init(&condC, 0);
  pthread_cond_init(&condP, 0);
  pthread_create(&cons, 0, consumer, 0);
  pthread_create(&prod, 0, producer, 0);
  pthread_join(prod, 0);
  pthread_join(cons, 0);
  pthread_cond_destroy(&condC);
  pthread_cond_destroy(&condP);
  pthread_mutex_destroy(&mutex);
}