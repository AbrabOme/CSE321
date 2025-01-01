#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* tasks(void* args);
int counter = 0;

int main() {

    for (int i = 0; i < 5; i++) {
        pthread_t thread;
        pthread_create(&thread, NULL, tasks, NULL);
        pthread_join(thread, NULL);
        counter++;
    }
}


void* tasks(void* args) {
    int threadCounter = 5;
    for (int i = 0; i < 5; i++) {
        printf("Thread %d prints %d\n", counter, (counter * threadCounter) + i);
    }
}
