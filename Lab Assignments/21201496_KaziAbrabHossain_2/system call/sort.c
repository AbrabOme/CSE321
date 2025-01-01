#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int numbers[argc-1];
    int swap;

    for (int i = 1; i < argc; i++) {
        numbers[i - 1] = atoi(argv[i]);
    }

    int counter = argc - 1;

    for (int i = 0; i < counter - 1; i++) {
        for (int j = 0; j < counter - i - 1; j++) {
            if (numbers[j] < numbers[j + 1]) {
                swap = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = swap;
            }
        }
    }

    printf("Sorted in Descending Order:\n");

    for (int i = 0; i < counter; i++) {
        printf("%d\n", numbers[i]);
    }
}
