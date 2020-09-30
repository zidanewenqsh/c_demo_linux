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
	if (-1==(msgid=msgget(2345,IPC_CREAT|0666)))
	{
		perror("msgget\n");
		exit(-1);
	}
	if (-1==msgrcv(msgid, &mybuf, sizeof(mybuf.mtext),1,IPC_NOWAIT))
	{
		perror("msgrcv\n");
		exit(-1);
	}else
	{
		printf("receiver message: %s\n", mybuf.mtext);
	}
	if (-1==msgctl(msgid, IPC_RMID, 0))
	{
		perror("msgctl, IPCRMID\n");
		exit(-1);
	}else
	{
		printf("delete successful\n");
	}
	return 0;
}
