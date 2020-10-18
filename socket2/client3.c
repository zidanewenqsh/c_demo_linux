#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <string.h>
#include <arpa/inet.h>
#define N
int main(int argc, char *argv[])
{
	int client_fd;
	int i;
    int sendpacket[N]={1,2,3,4,5,6,7,8,9,10};
	struct sockaddr_in myaddr;
	myaddr.sin_family = AF_INET;
	myaddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	myaddr.sin_port = htons(8080);
	char buf[100];
	//1. socket
	client_fd = socket(AF_INET, SOCK_STREAM, 0);
	if (client_fd==-1)
	{
		perror("socket error\n");
		exit(1);
	}
	if(connect(client_fd, (struct sockaddr *)&myaddr, sizeof(myaddr))==-1)
	{
		perror("connect error\n");
		exit(1);
	}

//	read(client_fd, buf, 100);
    if (-1==send(client_fd,(char*)&sendpacket, sizeof(sendpacket),0))
    {
        perror("recv\n");
        exit(1);
    }
    printf("send success, %ld\n", sizeof(sendpacket));
//	printf("get message: %s\n", buf);
	close(client_fd);
	//2. connect 
	//5. opt
	//6. close
}
