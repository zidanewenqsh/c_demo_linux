#include <stdio.h>
#include <fcntl.h>
int main(int argc, char * argv[])
{
	int fd;
	if((fd=open("a.txt", O_WRONLY|O_CREAT|O_APPEND, 0644))<0)
	{
		perror("open\n");
	}
	else
	{
		printf("fd=%d\n", fd);
	}
	return 0;
}
