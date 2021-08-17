#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void fork_call()
{
	int value = 10;

	if (fork() == 0)
		printf("Child has value  = %d\n", ++value);
	else
		printf("Parent has value = %d\n", --value);
}
int main()
{
	fork_call();
	return 0;
}

// Similar kind of output come out while using global variables also.
