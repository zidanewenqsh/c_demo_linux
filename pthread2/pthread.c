#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

void *thread_function(void *arg);

int main(int argc, char * argv[])
{
	pthread_t mythread;
	char message[] = "helloworld";
	void *retval;
	if ((pthread_create(&mythread, NULL, thread_function, (void *) message))==0)
	{
		printf("thread success\n");
	}
	//while(1);
	pthread_join(mythread, &retval);
	printf("get result: %s\n", (char *)retval);
	return 0;
}

void *thread_function(void *arg)
{
	printf("thread get message: %s\n", (char *)arg);
	pthread_exit("bye");
}
