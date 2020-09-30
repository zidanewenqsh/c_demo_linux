#include <stdio.h>
#define N 6
#define num 2520
int main(int argc, char* argv[])
{
	int x[N], y[N], n, i;
	n = num/N;
	for (i=1;i<N;i++)
	{
		y[i] = n*(8-i)/(7-i);
	}
	x[0] = y[0] = (n - y[5]/3)*8/7;
	for (i=1;i<N;i++)
	{
		x[i] = y[i] - y[i-1]/(9-i);
	}
	for (i=0;i<N;i++)
	{
		printf("x[%d]=%d\n", i, x[i]);
	}
	
	return 0;
}
