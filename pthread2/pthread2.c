#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
void *thread_function(void *arg);
pthread_mutex_t mymutex = PTHREAD_MUTEX_INITIALIZER;
int main(int argc, char * argv[])
{
	pthread_t mythread[3];
	int i;
	for (i=0;i<3;i++)
	{
		pthread_create(&mythread[i], NULL, thread_function, (void *) i);
	}

	
	while(1);
	return 0;
}

void *thread_function(void *arg)
{
	pthread_mutex_lock(&mymutex);
	int i;
	//int *p = (int *)arg;
	for (i=0;i<3;i++)
	{
		printf("thread get number: %d\n", (int) arg);
		sleep(1);
	}
	//pthread_exit("bye");
	pthread_mutex_unlock(&mymutex);
}
