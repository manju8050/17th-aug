#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
	
	printf("Hello... I am in exec.c \n PID= %d\n",getpid());

	//A null terminated array of character
	char *args[]={"./test","./me",NULL};

	execv(args[0],args);

	printf("Ending-----");
	
	
	return 0;
}

