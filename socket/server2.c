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
	saddr.sin_family = AF_INET;
	saddr.sin_addr.s_addr = htonl(INADDR_ANY);
	saddr.sin_port = htons(8080);
	sfd = socket(AF_INET, SOCK_STREAM, 0);
	if (sfd==-1)
	{
		perror("socket error\n");
		exit(-1);
	}
	if ((bind(sfd, (struct sockaddr *)&saddr,sizeof(saddr)))==-1)
	{
		perror("bind error\n");
		exit(-1);
	}
	while(1)
	{
		if (listen(sfd, 0)==-1)
		{
			perror("listen error\n");
			exit(-1);
		}
		cfd = accept(sfd, (struct sockaddr*)&saddr, &saddr_len);
		char word[] = "helloworld";
		if(send(cfd, word, sizeof(word),0)==-1)
		{
			perror("send error\n");
			exit(-1);
		}
		// write(cfd, word, sizeof(word));
		printf("send successful\n");
	}
	return 0;
}
