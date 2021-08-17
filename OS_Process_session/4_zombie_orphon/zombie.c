#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
	pid_t pid = fork();

	if (pid >= 0)
	{
		sleep(20); // Parent Process
		printf(" \n Exit from Parent Process...");
	}

	else		
	{
		printf(" \n Exit from Child Process. Parent still alive, hence child become zombie...\n");
		exit(0); // Child process
	}


	return 0;
}

