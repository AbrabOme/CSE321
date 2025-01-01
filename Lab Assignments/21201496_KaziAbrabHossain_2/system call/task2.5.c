#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main() {
	
	pid_t a;
	pid_t b;
	pid_t c;
	pid_t d;
    int counter = 1;

	a = fork();
	if (a == 0){
		counter++;
		printf("%d. Child process ID: %d\n", counter, getpid());
		
		b = fork();
		counter++;
		if (b == 0){
			printf("%d. Grand Child process ID: %d\n", counter, getpid());
			return 0;
		}
		
		c = fork();
		counter++;
		if (c == 0){
			printf("%d. Grand Child process ID: %d\n", counter, getpid());
			return 0;
		}
		
		d = fork();
		counter++;
		if (d == 0){
			printf("%d. Grand Child process ID: %d\n", counter, getpid());
			return 0;
		}
	}

	else{
		printf("%d. Parent process ID: %d\n", counter, getpid());
		wait(NULL);
	}
}
