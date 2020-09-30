#include <stdio.h>
int main(int argc, char* argv[])
{
	int n,i,j,m;
	int a[16] = {0};
	puts("input n:");
	//printf("input n:");
	scanf("%d",&n);
	printf("n=%d\n", n);
	for (m=0;m<15;m++)
	{
		i = n%2;
		j = n/2;
		n = j;
		a[m] = i;
	}
	for (m=15;m>=0;m--)
	{
		printf("%d",a[m]);
		if (m%4==0)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return 0;
}
