#include<stdio.h>
#include<sys/types.h>//pid
#include<unistd.h>//symbolic constants// fork & exec
int main()
{
	printf("Hello... \n PID= %d\n",getpid());
	return 0;
}


