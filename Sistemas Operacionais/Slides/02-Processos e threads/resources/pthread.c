#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 10

void* entradaThread(void *idThread) {
	long id = (long) idThread;
	printf("Olá, mundo! Eu sou a thread %ld\n", id+1);
	pthread_exit(NULL);
}

int main(int argc, char *argv[]) {
	pthread_t threads[NUM_THREADS];
	long status, i;
	
	for(i = 0; i < NUM_THREADS; i++) {
		printf("Criando a %lda thread...\n", i+1);
		status = pthread_create(&threads[i], NULL,
			entradaThread, (void*) i);
		
		if(status != 0) {
			printf("Erro ao criar a thread: %ld\n", status);
			exit(-1);
		}
	}
	return 0;
}