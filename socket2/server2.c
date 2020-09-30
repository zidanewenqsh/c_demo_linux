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
	int server_fd, client_fd;
	struct sockaddr_in server_addr;
       	struct sockaddr_in client_addr;
	int clientaddr_len = sizeof(client_addr);
	char word[] = "helloworld";
	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	server_addr.sin_port = htons(8080);
	//1. socket
	server_fd = socket(AF_INET, SOCK_STREAM, 0);
	if (server_fd==-1)
	{
		perror("socket error\n");
		exit(1);
	}
	if (bind(server_fd, (struct sockaddr *)&server_addr, sizeof(server_addr))==-1)
	{
		perror("bind error\n");
		exit(1);
	}
	if (listen(server_fd, 20)==-1)
	{
		perror("listen error\n");
		exit(1);
	}
	client_fd = accept(server_fd, (struct sockaddr *)&client_addr, &clientaddr_len);
	if (client_fd == -1)
	{
		perror("accept error\n");
		exit(1);
	}
	write(client_fd, word, sizeof(word));
	printf("write to client\n");
	close(client_fd);
	close(server_fd);
	//2. bind
	//3. listen
	//4. accept
	//5. opt
	//6. close
}
