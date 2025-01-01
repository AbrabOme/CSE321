#include <stdio.h>
#include <unistd.h>

int main() {
    int thread_counter = 1;

    for (int i = 0; i < 5; i++) {
        printf("thread-%d running\n", thread_counter);
        sleep(0.5); 
        printf("thread-%d closed\n", thread_counter);
        thread_counter++;
    }
}
