#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>
#include <sys/types.h>

int main(int argc, char * argv[])
{
	int shmid;
	void *shm;
	char content[] = "helloworld";
       	if(-1==(shmid=shmget(12345, 2048,IPC_CREAT|0666)))
	{
		perror("shmget\n");
		exit(-1);
	}
	if ((void *)-1==(shm=shmat(shmid, NULL, 0)))
	{
		perror("shmat\n");
		exit(-1);
	}
	if ((void *)-1==(memcpy(shm, content, sizeof(content))))
	{
		perror("memcpy\n");
		exit(-1);
	}
	else
	{
		printf("save successful\n");
	}
	if (-1==shmdt(shm))
	{
		perror("shmdt\n");
		exit(-1);
	}


	return 0;
}
