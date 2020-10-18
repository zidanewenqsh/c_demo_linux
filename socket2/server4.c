#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <string.h>
#include <arpa/inet.h>
#define N 10
typedef struct Student{
	char name[10];
	int age;
} Student1;
int main(int argc, char *argv[])
{
	int server_fd, conn_fd;
	struct sockaddr_in server_addr;
       	struct sockaddr_in client_addr;
	int clientaddr_len = sizeof(client_addr);
//	char word[] = "helloworld";
	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	server_addr.sin_port = htons(8080);
//	int recvpacket[N];
//    int i;
    double *p;
	double a;
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
	conn_fd = accept(server_fd, (struct sockaddr *)&client_addr, &clientaddr_len);
	if (conn_fd == -1)
	{
		perror("accept error\n");
		exit(1);
	}
    if (-1==recv(conn_fd, (char*)&a, sizeof(a),0))
    {
        perror("recv\n");
        exit(1);
    }
    printf("a=%f\n", a);
	Student1 s2;
	if (-1==recv(conn_fd, (char*)&s2, sizeof(s2),0))
    {
        perror("recv\n");
        exit(1);
    }
    printf("name: %s, age: %d\n", s2.name, s2.age);

//    for (i=0;i<N;i++)
//    {
//        printf("%d\n", recvpacket[i]);
//    }
//	write(conn_fd, word, sizeof(word));
	// printf("write to client\n");
	close(conn_fd);
	close(server_fd);
	//2. bind
	//3. listen
	//4. accept
	//5. opt
	//6. close
}
