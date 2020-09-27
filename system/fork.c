#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char * argv[])
{
	pid_t pid;
	pid = fork();
	printf("pid=%d\n", pid);
	if (pid<0)
	{
		perror("failure\n");
	}
	else if(pid==0)
	{
		printf("children pid:%d\n", getpid());
	}
	else if(pid>0)
	{
		printf("father pid:%d\n", getpid());
	}
	return 0;
}
