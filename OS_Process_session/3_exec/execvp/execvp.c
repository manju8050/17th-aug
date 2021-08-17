#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
	char *args[]={"./me","./test",NULL};
		
	printf("Hello... I am in exec.c \n PID= %d\n",getpid());

	execvp(args[1],args);
	
	printf("Ending-----");
	
	return 0;
}

