#include <stdio.h>

int main(int argc, char * argv[])
{
	printf("hello world\n");
	int i;
	printf("getpid:%d\n", getpid());
    printf("getppid:%d\n", getppid());
    scanf("%d", &i);

	return 0;
}
