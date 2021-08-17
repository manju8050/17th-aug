#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>//symbolic constants// fork & exec
/*
int main()
{
	fork();
	printf("\n Its fork example\n");	
	return 0;
}*/


int main()
{
	pid_t child_pid=fork();	
	if(child_pid==0)
		printf("\n Its Child Process");
	else
		printf("\n Its Parent Process");
	return 0;
}


