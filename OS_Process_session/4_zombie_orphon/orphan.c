#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t pid = fork();

	if (pid > 0)
		printf("\n Exit from parent process. But child process currently executing... "
			"\n Hence child process become orphan." ); // Parent

	else
	{
		sleep(20); // Child
		printf("\n Exit from child process.");
	}
	return 0;
}

