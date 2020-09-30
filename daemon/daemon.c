#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#define MAXFILENUM 65535
int main(int argc, char * argv[])
{
	pid_t pid;
	int fd;
	int i;
	char * word = "helloworld\n";
	pid = fork();
	if (pid<0)
	{
		perror("creat pid error");
		exit(-1);
	}
	else if (pid>0)
	{
		exit(0);
	}
	setsid();
	for (i=0;i<MAXFILENUM;i++)
	{
		close(i);
	}
	chdir("/");
	umask(0);
	while (1)
	{
		fd = open("/tmp/mylog.log", O_CREAT|O_RDWR|O_APPEND, 0666);
		if (fd<0)
		{
			perror("open file error\n");
			exit(-1);
		}
		write(fd, word, strlen(word));
		close(fd);
		sleep(5);
	}
	return 0;
}
