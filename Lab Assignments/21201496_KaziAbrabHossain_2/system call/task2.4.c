// sort_oddeven.c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


void sortFunction(int *array, int counter) {

    int swap;

    for (int i = 0; i < counter - 1; i++) {
        for (int j = 0; j < counter - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }

    printf("Sorted in Descending Order:\n");
    for (int i = 0; i < counter; i++) {
        printf("%d\n", array[i]);
    }
}


void doddEvenFunction(int *array, int counter) {

    printf("The Odd Numbers are:\n");
    for (int i = 0; i < counter; i++) {
        if (array[i] % 2 != 0) {
            printf("%d\n", array[i]);
        }
    }

    printf("The Even Numbers are:\n");
    for (int i = 0; i < counter; i++) {
        if (array[i] % 2 == 0) {
            printf("%d\n", array[i]);
        }
    }
}


int main(int argc, char *argv[]) {

    int numbers[argc - 1];
    int counter = argc - 1;

    for (int i = 1; i < argc; i++) {
        numbers[i - 1] = atoi(argv[i]);
    }

    pid_t a = fork();
    if (a == 0) {
        sortFunction(numbers, counter);
        return 0;
    }
    else {  
        wait(NULL);
        doddEvenFunction(numbers, counter);
    }
}
