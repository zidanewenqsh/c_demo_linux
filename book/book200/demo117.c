#include <time.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc, char* argv[])
{
	struct date setd;
       	struct date now; 
	struct date origind;
	getdate(&origind);
	printf("origin date is %d--%d--%d\n", origind.da_year, origind.da_mon, origin.da_day);
	setd.da_year = 2008;
	setd.da_mon = 10;
	setd.da_day = 8;
	setdate(&setd);
	getdate(&now);
	printf("now date is %d--%d--%d\n", now.da_year, now.da_mon, now.da_day);
	
	return 0;
}
