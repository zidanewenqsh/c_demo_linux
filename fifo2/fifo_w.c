#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#define FIFO_PATH "myfifofile"
int main(int argc, char * argv[])
{
	int fd;
	char cont_w[] = "helloworld";
	if ((mkfifo(FIFO_PATH, 0666)<0 && errno != EEXIST))
	{
		perror("creat fifo failed\n");
		exit(-1);
	}else
	{
		printf("creat fifo success\n");
		fd = open(FIFO_PATH, O_CREAT|O_WRONLY, 0666);
		if (fd>0)
		{
			while (1)
			{
				write(fd, cont_w, strlen(cont_w));
				printf("write success\n");
				sleep(5);
			}
		}else
		{
			perror("open file failed");
		}
	}
	return 0;
}
