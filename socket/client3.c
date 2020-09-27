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
	struct sockaddr_in saddr;
	int saddr_len = sizeof(saddr);
	char buf[100];
	saddr.sin_family = AF_INET;
	saddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	saddr.sin_port = htons(8080);
	sfd = socket(AF_INET, SOCK_DGRAM, 0);
	if (sfd==-1)
	{
		perror("socket error\n");
		exit(-1);
	}

	char word[] = "hello server";
	sendto(sfd, word, sizeof(word), 0, (struct sockaddr *)&saddr, saddr_len);
	printf("send successful\n");
	// read(sfd, buf, sizeof(buf));
	recvfrom(sfd, buf, sizeof(buf), 0, (struct sockaddr *)&saddr, &saddr_len);
	printf("get message from server: %s\n", buf);
	return 0;
}
