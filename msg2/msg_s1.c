#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/msg.h>
#include <sys/ipc.h>

struct msgbuf
{
	long mtype;
	char mtext[255];
};
int main(int argc, char * argv[])
{
	int msgid;
	struct msgbuf mybuf;
	mybuf.mtype = 1;
	strcpy(mybuf.mtext, "helloworld");
	if (-1==(msgid=msgget(2345,IPC_CREAT|0666)))
	{
		perror("msgget\n");
		exit(-1);
	}
	if (-1==msgsnd(msgid, &mybuf, sizeof(mybuf.mtext),0))
	{
		perror("msgsnd\n");
		exit(-1);
	}
	else
	{
		printf("send successful\n");
	}
	return 0;
}
