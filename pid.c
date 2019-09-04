#include <stdio.h>
#include <unistd.h>
int main (int argc, char *argv []){
	printf("Welcome to the program \n");
	printf("My PID: %d\n", getpid());
	printf("My Arguments: ");
	for (int i=0; i<argc; i++)
	{
		printf("%s, ", argv[i]);
	}

	printf("\n");
	return 0;
}