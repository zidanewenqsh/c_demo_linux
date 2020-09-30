#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main(int argc, char * argv[])
{
	int pfd[2];
	pid_t pid;
	char w_cont[] = "helloworld";
	char r_cont[255];
	printf("w_cont: %s\n", w_cont);
	if (pipe(pfd)<0)
	{
		perror("create pipe failed\n");
		return -1;
	}
	else
	{
		if ((pid=fork())<0)
		{
			perror("create process failed\n");
		}
		else if (pid>0)
		{
			close(pfd[0]);
			write(pfd[1], w_cont, strlen(w_cont));
			close(pfd[1]);
		}
		else
		{
			sleep(2);
			close(pfd[1]);
			read(pfd[0], r_cont, 255);
			close(pfd[0]);
			printf("child process read: %s\n", r_cont);
			printf("child process read num: %ld, %ld\n", strlen(r_cont), sizeof(r_cont));
		}
	}

	return 0;
}
