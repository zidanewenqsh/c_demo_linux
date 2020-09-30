
#include <stdio.h>
int main(int argc, char* argv[])
{
	double sum=0.0;
	double a = 100.0;
	int i;
	sum = a;
	for(i=0;i<9;i++)
	{
		sum += a;
		a /= 2;
	}
	printf("The ball fall route is %lf\n", sum);
	return 0;
}
