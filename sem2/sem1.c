#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

int semid;
struct sembuf sem_down = {0, -1, 0};
struct sembuf sem_up = {0, 1, 0};
void down()
{
	semop(semid, &sem_down, 1);
}
void up()
{
	semop(semid, &sem_up, 1);
}
int main(int argc, char * argv[])
{
	if (-1==semget(2345, 1, IPC_CREAT|0666))
	{
		perror("semget\n");
		exit(-1);
	}
	printf("hello1\n");
	semctl(semid, 1, SETVAL);
	printf("hello2\n");
	down();
	printf("helloworld\n");
	sleep(10);
	up();
	return 0;
}
