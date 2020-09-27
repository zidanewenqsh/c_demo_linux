#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(int argc, char * argv[])
{
	time_t start, end;
	start = time(NULL);
	sleep(2);
	end = time(NULL);
	printf("run time: %f\n", difftime(end, start));
	return 0;
}
