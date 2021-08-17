#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>//symbolic constants// fork & exec
int main()
{
	pid_t child_pid=fork();	
	if(child_pid)
		printf("\n Parrent pid :: %d\t Parrent ppid :: %d",getpid(),getppid());
	else
		printf("\n Child pid   :: %d\t Child ppid   :: %d\n",getpid(),getppid());
	return 0;
}


