#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
//#include <windows.h>
//#include <dos.h>

int main(int argc, char* argv[])
{
	time_t start, end;
	start = time(NULL);
	sleep(10);
	end = time(NULL);
	printf("run time is %f(s)\n", difftime(end, start));


	return 0;
}
