#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
int main(int argc, char * argv[])
{
	int i;
	int fd;
	char *content = "helloworld\n";
	// create a child process, close parent
	pid_t pid = fork();
	if (pid<0)
		exit(1);
	else if (pid>0)
		exit(0);
	//set new session
	setsid();
	// close all fid
	for (i=0;i<101122;i++)
	{
		close(i);
	}

	// changedir
	chdir("/");
	// umask
	umask(0);
	// event
	while (1)
	{
		fd = open("/tmp/mylog.log", O_CREAT|O_RDWR|O_APPEND,  06666);
		if (fd>0)
		{
			write(fd, content, strlen(content));
			close(fd);
		}
		sleep(3);
	}
	return 0;
}
