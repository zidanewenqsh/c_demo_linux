#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/un.h>
int main(int argc, char *argv[])
{
	int sfd, cfd;
	struct sockaddr_in saddr, caddr;
	int saddr_len = sizeof(saddr);
	char recvbuf[100];
	char sendbuf[100];
	saddr.sin_family = AF_INET;
	saddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	saddr.sin_port = htons(8080);
	sfd = socket(AF_INET, SOCK_STREAM, 0);
	if (sfd==-1)
	{
		perror("socket error\n");
		exit(-1);
	}
	if (connect(sfd, (struct sockaddr *)&saddr, sizeof(saddr))==-1)
	{
		perror("connect error\n");
		exit(-1);
	}
	while (1)
	{
		printf("input a name:\n");
		scanf("%s", sendbuf);
		if (strncmp(sendbuf, "stop",4)>0)
		{
			break;
		}
		if (send(sfd, sendbuf, sizeof(sendbuf), 0)==-1)
		{
			perror("send error\n");
			exit(-1);
		}
		printf("send message: %s\n", sendbuf);
		if (recv(sfd, recvbuf, sizeof(recvbuf), 0)==-1)
		{
			perror("recv error\n");
			exit(-1);
		}
	
		// read(sfd, buf, sizeof(buf));
	
		printf("get message: %s\n", recvbuf);
		}
	return 0;
}
