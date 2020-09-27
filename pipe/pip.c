#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define N 255
int main(int argc, char * argv[])
{
	int fds[2];
	pid_t pid;
	char * w_cont = "helloworld\n";
	char r_cont[N];
	// int fd;

	if (pipe(fds)<0)
	{
		perror("creat pipe failed\n");
		exit(-1);
	}
	else
	{
		pid = fork();
		if (pid<0)
		{
			perror("creat pid failed\n");
			exit(-1);
		}
		else if (pid>0)
		{
			close(fds[0]);
			write(fds[1], w_cont, strlen(w_cont));
			close(fds[1]);
		}
		else
		{
			sleep(1);
			close(fds[1]);
			read(fds[0], r_cont, N);
			close(fds[0]);
			printf("the child process read: %s", r_cont);
		}
	}
	return 0;
}
