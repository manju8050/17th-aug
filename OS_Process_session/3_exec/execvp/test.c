#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	printf("Hello... I am in new file \n PID= %d\n",getpid());
	return 0;
}


