
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[])
{
	time_t Time;
	struct tm *t;
	Time = time(NULL);
	t = localtime(&Time);
	printf("local time is :%s", asctime(t));
	return 0;
}
