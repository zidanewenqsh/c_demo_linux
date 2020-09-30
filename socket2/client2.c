#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <string.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
	int server_fd;
	struct sockaddr_in myaddr;
	myaddr.sin_family = AF_INET;
	myaddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	myaddr.sin_port = htons(8080);
	char buf[100];
	//1. socket
	server_fd = socket(AF_INET, SOCK_STREAM, 0);
	if (server_fd==-1)
	{
		perror("socket error\n");
		exit(1);
	}
	if(connect(server_fd, (struct sockaddr *)&myaddr, sizeof(myaddr))==-1)
	{
		perror("connect error\n");
		exit(1);
	}
	read(server_fd, buf, 100);
	printf("get message: %s\n", buf);
	close(server_fd);
	//2. connect 
	//5. opt
	//6. close
}
