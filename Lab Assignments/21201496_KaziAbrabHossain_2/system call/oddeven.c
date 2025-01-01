#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    printf("Odd Numbers:\n");
    for (int i = 1; i < argc; i++) {
        int number = atoi(argv[i]);
        if (number % 2 != 0) {
            printf("%d\n", number);
        }
    }

    printf("Even Numbers:\n");
    for (int i = 1; i < argc; i++) {
        int number = atoi(argv[i]);
        if (number % 2 == 0) {
            printf("%d\n", number);
        }
    }
}
