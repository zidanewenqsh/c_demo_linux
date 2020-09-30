#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#define FIFO_PATH "myfifo"

void sys_error(const char *info)
{
	perror(info);
	exit(-1);
}

int main(int argc, char *argv[])
{
	int fd;
	char *cont_w = "hello world";
	if((mkfifo(FIFO_PATH, 0666))<0 && errno!=EEXIST) sys_error("mkfifo failed");
	else
	{
		fd = open(FIFO_PATH, O_CREAT|O_WRONLY|O_APPEND, 0666);
		if (fd<0) sys_error("open failed");
		else
		{
			while (1)
			{
				write(fd, cont_w, strlen(cont_w));
				printf("write: %s\n", cont_w);
				sleep(5);
			}
		}
	}
	return 0;
}
