
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[])
{
	time_t Time;
	struct tm *t, *gt;
	Time = time(NULL);
	t = localtime(&Time);
	printf("local time is: %s", asctime(t));
	gt = gmtime(&Time);
	printf("greenwish time is %s", asctime(gt));
}
