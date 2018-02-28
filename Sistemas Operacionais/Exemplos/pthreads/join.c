#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 10

void* entradaThread(void *idThread) {
	long id = (long) idThread;
        long numero = rand()%100;
	printf("Olá, mundo! Eu sou a thread %ld. Eu sorteei %ld!\n",
               id+1, numero);
	pthread_exit((void*)numero);
}

int main(int argc, char *argv[]) {
        srand(time(NULL));
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
	
	for(i = 0; i < NUM_THREADS; i++) {
            long sorteado;
            status = pthread_join(threads[i], (void**) &sorteado);
            
            if(status != 0) {
                printf("Erro ao esperar thread: %ld\n", status);
                exit(-1);
            }
            
            printf("A thread %ld sorteou %ld!\n", i+1, sorteado);
        }
	return 0;
} 
