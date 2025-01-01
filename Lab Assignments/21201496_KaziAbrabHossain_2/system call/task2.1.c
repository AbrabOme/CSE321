#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    FILE *file_pointer = fopen(argv[1], "a+");
    char user_string[999];

    while (1) {
        printf("Write the String: ");
        fgets(user_string, sizeof(user_string), stdin);  
        
        if (strcmp(user_string, "-1\n") == 0) {
            break;
        }

        fprintf(file_pointer, "%s\n", user_string);
    }

    fclose(file_pointer);
}
