#include <stdio.h>
#include <math.h>
int main(int argc, char * argv[])
{
	printf("hello world\n");
	double a, b;
	int n;
	while((n=scanf("%lf%*c", &a))>0)
	{
		printf("a=%lf\n",a);
		if (a<0)break;
		b = sqrt(a);
		printf("b=%lf\n",b);
	}
	return 0;
}
